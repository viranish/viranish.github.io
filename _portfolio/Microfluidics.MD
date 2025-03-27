---
title: "Microfluidics"
excerpt: "A microfluidic device is a device with small channels and tubes that transport, sort, and mix reagents together."
header:
  image: /assets/img/IMG_5255.jpg
  teaser: /assets/img/IMG_5255 (1).jpg
gallery:
  - image_path: assets/img/IMG_5255 (2).jpg
  - image_path: assets/img/IMG_5256.jpg 
   
---

# Introduction

* **Microfluidic Devices** A microfluidic device is a device with small channels and tubes that transport, sort, and mix reagents together.
* **Pinch Flow Fractionation (PFF)** PFF is a microfluidic technique that separates and sorts particles based on their size. It controls fluid flow by created pinched microchannels, which later flow into broader sections, to separate particles into different streamlines, based on size, without the aid of any outside forces. 
* **Specific Application** Such size-based separation in PFF was used to separate circulating tumor cells (CTCs) from white blood cells (WBCs), to study cancer cells further. Here is a [link](https://pubs.rsc.org/en/content/articlelanding/2015/lc/c5lc01014d?utm_source=chatgpt.com) to the study. Citation: M. Pødenphant et al., “Separation of cancer cells from white blood cells by pinched flow fractionation,” Lab on a Chip, vol. 15, no. 24, pp. 4598–4606, 2015, doi: https://doi.org/10.1039/c5lc01014d.
‌

# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a45202251d9212cebc?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Instructions

* **CAD Model** Design the mold in Fusion 360 using the Pinch Flow Fractionation equation to determine the Y coordinates of the outlet streams. The design is made on top of the base model available in the assignment.
* **Print and Curable Mold** Print the mold in the resin printers (Form 3 or 4) with a 0.05 mm or 0.025 mm layer height. Once done, wash the device for five minutes in FormWash on the print bed, then wash it for five minutes in fresh IPA, dry it upside down for 30 minutes, perform a surface cure for 60 seconds, and finally remove the support material. 
* **Parylene Device** Apply a thin layer of parylene coating on the internal and external surfaces on the mold to prevent PDMS adhesion.
* **Cast PDMS** Pour PDMS coating onto the mold and cure it for 24 hours at 23 degrees Celsius. Then carefully remove the PDMS from the mold.
* **Plasma Bond Glass Slide** Press the glass slide surface onto the PDMS and press them together to stick them to each other, ensuring no air bubbles are trapped.

# Discussion

* Resin printed molds are coated parylene to create a hydrophobic layer that prevents uncured PDMS from reacting to or adhering to the resin mold surface. This results in a smoother finish with less defects. One application of the micro fluidic sorting device is that it could be used for a biomedical research project where cells have to be separated based on size to be studied. Other applications include drug testing, food testing, and environmental testing. 

* My device is conducive to sorting because it provides control over fluid dynamics and the trajectories of certain particles. The pinch width was the smallest feasible option (1.5 times the diameter of the largest particle). The construction focuses the fluid stream and aligns the particles and creates a stable, laminar flow. The pinch width being low increases the precision of particle separation by forcing the particles to align and then flow into distinct streamlines. The outlet width is calculated using the formula for the appropriate Y-coordinates for each particle size. This ensures the flow of particles into the correct outlet, sorted by size. The outlet ports are located at the end of each of these streams to ensure proper separation of particles by size.

* To ensure that each outlet receives the same flow rate, symmetrical outlet design is ensured by maintaining equal channel lengths, maintaining equal hydraulic resistance. Also the design minimizes dead volumes and sharp edges, which causes a decrease in trapped bubbles, which are potential causes for change in flow rate. 

* Based on the results, one improvement that can be made is ensuring better outlet channel geometry. This can be done by altering outlet widths to ensure that each outlet has the same area. The length of the outlet channel can also be altered to make sure that each outlet is symmetrical, ideally the same length. The shape of the outlet channels can be altered to have equal flow rates in each channel. The transition angles to the outlet channels can also be smoothed by fillets. More outlet ports could also help sort finer particle size, but that could also bring up a challenge for outlet spacing. 


{% include gallery caption="Microfluidics Gallery" %}

