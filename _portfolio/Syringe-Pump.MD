---
title: "Syringe Pump"
excerpt: "DIY Syringe Pump capable of 1 uL/min flow rate up to 10 mL/min."
header:
  image: /assets/img/IMG_9221.jpg
  teaser: /assets/img/IMG_9222.jpg
gallery:
  - image_path: assets/img/IMG_9221.jpg
  - image_path: assets/img/IMG_9222.jpg 
  - image_path: assets/img/Screenshot 2025-01-21 012402.png
   
---

# Features

* **Precision Linear Motion** Achieved using lead screws, stepper motors, or linear rails for accurate syringe movement
* **Microcontroller-Based Operation** Uses an Arduino
* **Adjustable Syringe Holder** Accommodates different syringe sizes

# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a48c8428571d48595c?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Arduino Code

Here is a [link](https://github.com/viranish/viranish.github.io/blob/main/spump.ino) to the Arduino Code

# Pump Operation

* **Starting and Pausing Operation** Press the latching button to begin operation of the syringe pump. The LED will turn green as the syringe is in motion. The button can be pressed again to pause motion at any point, turning the LED yellow. In the case that the syringe is out of liquid, meaning it has been fully pressed to empty, the LED will turn red. 

* **Programming Operation:
The flowrate of the pump can be set in the Arduino Program in mL/min and then uploaded to the syringe pump itself. To access the arduino, slide the electrical housing off of the lid.

* **Switching Syringes** Syringes can simply be switched out manually. The barrel grip must be slid into the end support slit, while the plunger grip is simultaneously fit into the carriage. 

* **Changing Direction** The left and right momentary buttons can be held down to move the lead screw clockwise and counterclockwise respectively. While enabling a kind of manual control mode, they mainly serve to adjust the carriage position electronically (as opposed to physically by using one’s hands).

* **Flowrate Control** The flow rate can be incrementally controlled and adjusted by a potentiometer; turning the potentiometer counterclockwise will halt the flow rate, whilst turning clockwise increases it. The minimum of the potentiometer (full counterclockwise rotation) translates to 0% of the flow rate in the arduino program, and the maximum (full clockwise rotation) is 100% of that in the arduino program. 

# Off-the-shelf parts

| Items                 |
| -------------         |
| Stepper Driver        |
| Push button           |
| Breadboard            |
| Arduino               |
| Ball Bearing          |
| Coupler               |
| Hex Socket            |
| Lead Screw            |
| LED                   |
| Linear Rod            |
| Linear Bearing        |
| Lock Collar Lead Screw|
| Lock Collar Linear Rod|
| M3 Nut                |
| M3x8 Thread Screw     |
| M3x10 Bolt            |
| M5 Tee Nut            |
| M5x8 Bolt             |
| RT-65D                |
| Motion Button         |
| Motor                 |
| Nut tr8               |
| Potentiometer         |
| Syringe piston        |
| V Slot                |

# 3D Printed Parts

| Items         |
| ------------- |
| Carriage      |
| Enclosure     |
| End support   |
| Grip Support  |
| Enclosure Lid |
| Motor Mount   |
| Tip Support   |

{% include gallery caption="Syringe Pump Gallery" %}
