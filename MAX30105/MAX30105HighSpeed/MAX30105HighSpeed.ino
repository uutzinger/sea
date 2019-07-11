/*
  Optical SP02 Detection (SPK Algorithm) using the MAX30105 Breakout
  By: Nathan Seidle @ SparkFun Electronics
  Date: October 19th, 2016
  https://github.com/sparkfun/MAX30105_Breakout

  This demo shows heart rate and SPO2 levels.

  This code will also work with MAX30100 and MAX30102.
  
  It is best to attach the sensor to your finger using a rubber band or other tightening 
  device. Humans are generally bad at applying constant pressure to a thing. When you 
  press your finger against the sensor it varies enough to cause the blood in your 
  finger to flow differently which causes the sensor readings to go wonky.

  This example is based on MAXREFDES117 and RD117_LILYPAD.ino from Maxim. Their example
  was modified to work with the SparkFun MAX30105 library and to compile under Arduino 1.6.11
  Please see license file for more info.

  Hardware Connections (Breakoutboard to Arduino):
  -5V = 5V (3.3V is allowed)
  -GND = GND
  -SDA = A4 (or SDA)
  -SCL = A5 (or SCL)
  -INT = Not connected
 
  The MAX30105 Breakout can handle 5V or 3.3V I2C logic. We recommend powering the board with 5V
  but it will also run at 3.3V.
*/

#include <Wire.h>
#include "MAX30105.h"

MAX30105 sensor;

#define MAX_BRIGHTNESS 255

#if defined(ARDUINO_AVR_NANO)
//Arduino Uno doesn't have enough SRAM to store 100 samples of IR led data and red led data in 32-bit format
//To solve this problem, 16-bit MSB of the sampled data will be truncated. Samples become 16-bit data.
uint16_t irBuffer[100];   //infrared LED sensor data
uint16_t redBuffer[100];  //red LED sensor data
#else
uint32_t irBuffer[100];   //infrared LED sensor data
uint32_t redBuffer[100];  //red LED sensor data
#endif

byte readLED = 13; //Blinks with each data read

void setup()
{
  Serial.begin(115200); // initialize serial communication at 115200 bits per second:

  //pinMode(pulseLED, OUTPUT);
  pinMode(readLED, OUTPUT);

  // Initialize sensor
  if (!sensor.begin(Wire, I2C_SPEED_FAST)) //Use default I2C port, 400kHz speed
  {
    while (1) { Serial.println(F("MAX3010x was not found. Please check wiring/power.")); }
  }
  else  {
    Serial.println(F("MAX3010x was found."));
  }

  byte ledBrightness =   64; //Options: 0=Off to 255=50mA
  byte sampleAverage =    1; //Options: 1, 2, 4, 8, 16, 32
  byte ledMode       =    2; //Options: 1 = Red only, 2 = Red + IR, 3 = Red + IR + Green
  int sampleRate     = 1000; //Options: 50, 100, 167, 200, 400, 600, 800, 1000, 1600, 3200
  int pulseWidth     =   69; //Options: 69, 118, 215, 411 [us] 
  int adcRange       = 4096; //Options: 2048, 4096, 8192, 16384
  // ===========================
  // *=SPO2Mode, o=HeartRateMode
  //    69  118  215  411
  //    15   16   17   18
  //  50 *    *    *    *
  // 100 *    *    *    *
  // 200 *    *    *    *
  // 400 *    *    *    *
  // 800 *    *    *    o
  //1000 *    *    o    o
  //1600 *    o    o
  //3200 o
  // ===========================
  sensor.setup(ledBrightness, sampleAverage, ledMode, sampleRate, pulseWidth, adcRange); //Configure sensor with these settings
}

void loop()
{
  //Continuously taking samples from MAX3010x.  Heart rate and SpO2 are calculated every 1 second
  while (1)
  {
      while (sensor.available() == false) { //do we have new data?
        sensor.check(); } //Check the sensor for new data
      digitalWrite(readLED, !digitalRead(readLED)); //Blink onboard LED with every data read
      // Send samples and calculation result to terminal program through UART
      Serial.print(F("R:"));
      Serial.print(sensor.getRed(), DEC);
      Serial.print(F(","));
      Serial.println(sensor.getIR(), DEC);
      sensor.nextSample(); //We're finished with this sample so move to next sample
  }
}
