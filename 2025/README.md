# SEA2025 BME

## BME Sophomore Design Course


In our BME sophomore design course we build robots and create games.
This year’s game was <a href="https://sites.google.com/email.arizona.edu/bme210/design-competition/competition-2025" target="_blank" rel="noopener"> Popper</a> and we want you to play it too.

<a href="https://bme.engineering.arizona.edu/faculty-staff/faculty/urs-utzinger" target="_blank" rel="noopener"> 
  <img
    src="https://bme.engineering.arizona.edu/sites/default/files/styles/az_medium/public/2024-08/Urs-Utzinger.png.webp?itok=5oJljHrV"
    alt="Urs Utzinger"
    width="100"
  /> </a> <a href="https://bme.engineering.arizona.edu/faculty-staff/faculty/urs-utzinger" target="_blank" rel="noopener">
  BME210 Instructor: Urs Utzinger
</a>

## Teaser
<a href="https://youtu.be/0OsqLDplr2M" target="_blank" rel="noopener">
  <img
    src="https://i.ytimg.com/vi/0OsqLDplr2M/hqdefault.jpg"
    alt="Popper Teaser"
    width="600"
  /> </a> <a href="https://youtu.be/0OsqLDplr2M" target="_blank" rel="noopener"> 
  Popper
</a>

## BME 210
BME210 is the first BME specific design course for engineering students. Their first general desing course is ENG 102. Some high schools offer ENG 102.

You can checkout the BME courses in the [UA Catalog](https://catalog.arizona.edu/courses?subjectCode=BME&page=1&cq=&sortBy=code).

We also have public website for [BME 210](https://sites.google.com/email.arizona.edu/bme210).


## Setting up the Experience

### Infrastructure

- Each team needs at least one **`monitor`**, **`keyboard`** and **`mouse`**
- A team consists of 1-3 players
- Each players uses one meArm 
- The meArm needs **`two power outlets`**
- The game is played on a flat surface such as a **`desk`**
- Each meArm needs either a **`keyboard`** or **`gamepad`** (preferred) to controll it
- If you use a gamepad, it needs to be connected through USB cable (bluetooth is not supported)
- Once the meArm is running the monitor and mouse are no longer needed and an other team member can use them to setup a meArm. If they player uses a gamepad, the keyboard can also be passed on to an other player to setup.

At the University of Arizona, the Salter laboratory works well for this but the design class rooms in HSIB building might work also given power distributors are made available.

### Parts

<img
  src="assets/meArm_Setup_annotated.png"
  alt="Setup"
  height="500px" 
/>


| Product      | Number <br> in image above  | Description | Source  |
|--------------|----------|-------------|-----------|
| **Joystick**   | 1      | Sony Style Game Pad | Bring your own |
| **Raspberry Pi**   | 2  | Raspberry Pi 4  | Salter Lab (BME 210)|
| **Motor Hat** | 3       | Motor Controller | Salter Lab (BME 210)|
| **Power RasPi** | 4     | 3-4 A USB Power Supply | Salter Lab (BME 210)|
| **Power Motors**  | 5   | 1-2A USB Power Supply | Salter Lab (BME 210)|
| **Flash Drive**  | 6   | Raspian OS with all programs installed| Salter lab (BME 210)|
| **HDMI Monitor Interface**  | 7   | Miro HDMI to Regular HDMI | Salter Lab (BME 210)|
| **meArm**  | 8   | Pre Built MeArm | Salter Lab (BME 210) |
| **Balloons** | not shown | Small inflatable balloons | [Amazon](https://a.co/d/h41R9b4) |
| **Needles** | not shown | T Pins | [Amazon](https://a.co/d/27yMVBo)
| **Tape** | not shown | any kind | |
| **Hot Glue** | not shown | Hot glue gun with glue | Salter lab | 
| **Rubber Bands** | not shown | any kind, about 2" | |

## Connecting the Hardware
The meArm costs of 4 motors:
- base
- shoulder
- elbow
- gripper

<img
  src="assets/meArm_annotated.png"
  alt="Setup"
  width="600px"
/>

The motor cables need to be attached to the motor hat. The order and orientation matters.

<img
  src="assets/Cable_Connection.png"
  alt="Motor Cables"
  width="600px"
/>

The cable has 3 wires with the following colors on either side:

- Black or brown is GND [G on PCB]
- Orange or white is Signal [S on PCB]

There are three motors
- Base connects to slot **`#0`**
- Shoulder connects to slot **`#1`**
- Elbow connects to slot **`#14`**
- Gripper connects to slot **`#15`**

You will need to provide power to the Motor Hat. Please make sure the color of the cables matches this picture

<img
  src="assets/Power_Connection.png"
  alt="Power Cables"
  width="600px"
/>

- Red is attqached to terminal **`5-12V`**
- Black is **`GND`**

## Powering up the Raspberry Pi

Before you power up the Raspberry Pi you need to
- insert the flash drive into one of the two blue USB connectors
- `DO NOT REMOVE THE DRIVE WHILE THE Raspberry Pi IS POWERD ON` this would be equivalent of removing the engine of your car while driving on the highway.

You can connect the Montiro, Keyboard, Mouse and Gamepad before or after you power up the Raspberry Pi.
- You should connect the monitor to the HDMI connector cable [item 7]
- You can attach mouse and keyboard USB cable to one of the black USB ports
- You can attach game pad to one of the black USB ports

## Starting the Software

The Raspberry Pi will boot into the desktop. To start your meArm you will need to run the calibration program `Zero.py` and then you can run the control program `Controller.py`

### Start Thonny

Thonny is the default Python programming editor on Raspberry Pi.

  <img
    src="assets/Open_Thonny.png"
    alt="Setup"
    width="600px" 
  />

### Calibrate

Since you don't know which flash drive goes to which mrArm you will need to calibrate the the motors. 

Load and run `Zero.py`

  <img
    src="assets/Loading_Zero.png"
    alt="Load Zero"
    width="600px" 
  />

  <img
    src="assets/Running_Zero.png"
    alt="Run Zero"
    width="600px" 
  />

Now the main display for Zero will appear.

  <img
    src="assets/Zero.png"
    alt="Zero Screen"
    width="600px" 
  />

With all motors running you will want to align them so that 

- The meArm points straight forward (base) 
- The shoulder of the meArm (fist arm segment) points straight up
- The elbow of the meArm (second aem segment) is horizontal
- The gripper is closed (do not force it beyond the two finger touching each other)

**Do not force the motors beyond the pysical limits of the meArm, they will get hot and burn out.**

**You might need similar values as shown in the image above.**

The instructions tell you which keys on the keyboard will move which motors.
Once you are satisfied with the alignment you close the window with the `X` and the calibration is saved.

If you click on a window other than meArm Calibration, the program will no longer read the keyboard input.

You can not use the gamepad and need to use the keyboard for this operation. 

## Attaching Needle and Balloons

The balloons can be inflated with the compressed air hose in the Salterlab. Othewise you need to use your own means.

You can use tape or elastic bands to attach them to the meArm.

The needles can be attached or fixed with hot glue.

For a fair game, one part of the balloon and the needle need to touch the wood of one finger of the gripper.

## Playing the Game

Load the controller program.

  <img
    src="assets/Loading_Controller.png"
    alt="Setup"
    width="600px" 
  />

Now you can play with the meArm uing the gamepad and the keyboard.

  <img
    src="assets/Controller.png"
    alt="Setup"
    width="600px" 
  />

Once the program is running you can disconnect the monitor.
If you have a gamepad you can also disconnect the keyboard.

Sometimes the gamepad requires a reset. You unplug and replug it before running the python program. The programs are not made to detect automatically a reconnection. Also if you are using a gamepad needs it needs to be attached prior to starting the software.

## Scoring

For the game to be fair, the needle as well as a part of the balloon needs to touch a finger piece of the gripper.

- A good game lasts about 1 minute
- Popping a ballon is one point
- Keeping your own ballon not being popped is one point
- Popping all balloons of the opposing team before the one minute mark gives one point for every 10 seconds remaining time.
- If there is a tie, you play until one ballon is popped.
- When your balloon is popped, the referee should disable your needle with a piece of tape.

