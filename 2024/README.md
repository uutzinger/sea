# SEA2024
A fun BME Summer Engineering Academy project for 2024 by [Urs Utzinger](https://bme.engineering.arizona.edu/faculty-staff/faculty/urs-utzinger)

Make a dice in an hour.

<img src="https://raw.githubusercontent.com/uutzinger/SEA2024/master/assets/dice.png" width="250">

## Requirements

### Software
- [Access to Maker Case](https://en.makercase.com/)
- Laser Works to convert your drawing to laser cutter instructions. Windows only. [Download LaserWORKS V8.](https://bosslaser.com/laser-software/)
- Inkscape to edit and change your drawings. Any Computer. [Obtain it.](https://inkscape.org/release/inkscape-1.2/) or use Adobe Illustrator.

### Hardware
- One piece of MDF wood particle board. Approximately 1/8 inch thick.
- BOSS Laser 2436 or similar.

### Staff Preparation
- Staff needs to make one of the dice themselves before attempting to holding the lab.
- Computers need to have Inkscape and optionally the laserworks software installed.
- There likely is enough scrap MDF around, but one should check and adjust maximum size of the dice accordingly.

### Timing
- Making the design takes about 30 minutes
- Staff collating and makeing the parts about an hour.
- Assembling the parts takes about 20 minutes.
  
## Instructions

## Prepare
Find a piece of MDF board and determine its thickness. They are all different.
- Measure the thickness of your board with calipers.
<img src="https://raw.githubusercontent.com/uutzinger/SEA2024/master/assets/caliper.png" width="250">

- The calipers need to show 0mm when they are closed.
- Then measure like this:
<img src="https://raw.githubusercontent.com/uutzinger/SEA2024/master/assets/thickness.png" width="250">

### Drawings
Draw a Box by connecting to the Maker Case website and select:
- Simple box (we dont really have the time to make complex boxes but you can make them at [Xerocraft](https://xerocraft.org/) in Tucson e.g. Saturday is open hack).
- Thickness you measured.
- Closed box.
- Units millimeters.
- Finger joints.
- Adjust equal dimensions no larger than 50x50x50mm.
- Adjust finger size so that it looks like this:
<img src="https://raw.githubusercontent.com/uutzinger/SEA2024/master/assets/makercase.png" width="250">

Create the Plans setting the following and downloading an SVG file:
- Kerf and Corner Compensation 0.1mm (you need to cut less because the laser beam has a width)
<img src="https://raw.githubusercontent.com/uutzinger/SEA2024/master/assets/drawings.png" width="250">

### Update the Plans
- Load the SVG file with Inkscape on a computer.
- Ungroup the imported graphics with Object/Ungroup.
- Replace the text with your own graphics. Forexample: https://www.svgrepo.com/svg/532061/moon-stars. Line Icons work well as the laser just draws the lines.
  - Import the graphics into Inkscape.
  - Likely its too large and wont fit. Click on the imported object and select Object/Transform. Scale it proportionally to for example 10%.
  - Adjust the Color and Stroke width Object / Fill and Stroke. The Stroke Point should be black (R,G,B is 0). The Stroke Style should be 0.1mm Width.
- Save the modified SVG file.
<img src="https://raw.githubusercontent.com/uutzinger/SEA2024/master/assets/inkscape.png" width="250">

### Convert
Convert the SVG file to Laser Cutter Format:
- Save the SVG file to DXF. Make sure to use Millimeters as units (mm).
- Open the RDWorksV8.exe program.
  - Import the DXF file.
  - Make sure its size matches your expectations.
  - If it looks ok you can copy the DXF file to a flash drive. Make sure it has your name in the filename.
<img src="https://raw.githubusercontent.com/uutzinger/SEA2024/master/assets/laserworks.png" width="250">

### Create the Parts
This is intended for counselors and staff only.
Staff should collate several files so it takes less time to cut.
[Using the laser cutter](LaserCutter.md)

### Assemble the Parts
Put the parts together. The fit snug.
You can use some white wood glue to make them stick better. But use only small amount and only on the sides that touch other wood.



