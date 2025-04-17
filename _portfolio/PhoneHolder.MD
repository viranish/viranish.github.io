---
title: "Bike Phone Mount/Holder"
excerpt: "A TPU phone holder supported by a multi-component PLA support structure that mounts on a bike. The phone holder rotates and snaps into place at certain angles."
header:
  image: /assets/img/IMG_5273.jpg
  teaser: /assets/img/IMG_5274.jpg
gallery:
  - image_path: assets/img/IMG_5280.jpg
  - image_path: assets/img/IMG_5273.jpg
  - image_path: assets/img/IMG_5274.jpg 
  - image_path: assets/img/IMG_5275.jpg
  - image_path: assets/img/gif.gif

---

# Top Down Modeling

* **Description** The top-down approach starts with the overall, bigger-picture idea of a model and then breaks down into smaller parts. Specifically, it breaks down a functional model into different components and relies on those components being joined by as-built joints. This is why it is essential to ALWAYS create the new component before beginning any designing activities. After creating a new component, the component should be named and active for all related activity for organizational purposes. 
* **Application in this design** In this phone mount, the top-down approach was used to design several different components. The design originated from a rough sketch on the drawing board and eventually transitioned into the Fusion 360 platform. The first component is the clamp, which is critical for mounting the holder onto the bike handle. Next, a component is created that attaches to the clamp and becomes a base for the detent mechanism that spins the holder. The next component is the inside of the detent mechanism which spins and allows for the rotation apparatus to operate. Then a simple cap is designed to cover the detent since it includes multiple parts that can easily fall out. Finally, a phone-case like holder is attached to the detent.
‌
# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a488ee11b84e1b41a9?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Discussion

* **Rotation mechanism** The rotation mechanism has a circular disc with four spherical pockets for the mechanism to stop specifically at the angles: 0, 90, 180, and 270 degrees. The base of the rotation mechanism contains two rectangular spaces with compression springs. One of those spaces also contains a ball bearing, which fits into the spherical pockets. This allows for the circular disc to rotate and snap upon contact of the pocket with the ball bearing. This mechanism worked well; however, due to unideal spring size one of the springs ended up twisting and being misplaced.
* **Changing dimensions for 3D printing** Many dimensions had to change and I had run multiple iterations of prints. These errors were in the PLA parts since TPU is flexible enough to adjust to a small tolerance. However, the TPU part could have been made wider to adjust for some of the length being lost to the nuts that attached to the rest of the holder. Particularly, the issues were presented in the detent base, inside component/circular disc, and the detent cap. Most of these issues stemmed from the screw holes being too small. Another issue was accounting for the head of the screws interfering with other components (the screw attaching the detent base to the clamp interfered with the placement of the inside circular disc). The cap also has a hole for a circular protrusion that originates from the inside component. The offset for the hole had to be adjusted three times. One improvement that could have been made is that the base of the detent could have been adjusted for ideal spring length.
* **Printing technology** The components were filament printed. A 0.6 nozzle was used to print the PLA since those components had to be rigid while the elastic phone case was printed with TPU. Filament printing was used because the timeline allowed for multiple iterations (powder was only going to be printed once), the cleaning process for powder requires an extra step, and the design would not have benefitted much from powder printing.
* **Assembly** The clamp had a top and bottom part that are attached with M3 screws and M3 bolts. The bolts can be loosened or tightened to adjust on the bike handle. The detent base is also screwed with M3 nuts and appropriate-sized heat set inserts are embedded into the top of the clamp. The inside circular disc goes on top, within the base. Two compression springs and one ball bearing are inserted into rectangular slots in the base. A cap is screwed on top of the base with M3 screws, locking the detent mechanism inside the base. Finally, the TPU phone holder is screwed on, with M5 screws, onto a circular extrusion that elongates off of the detent’s circular disc.


{% include gallery caption="PhoneHolder Gallery" %}

