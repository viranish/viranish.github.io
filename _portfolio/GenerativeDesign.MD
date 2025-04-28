---
title: "Genrative Design Spool Holder"
excerpt: "A filament spool holder for a 3D printer, created using generative design."
header:
  image: /assets/img/IMG_5338.jpg
  teaser: /assets/img/IMG_5338.jpg
gallery:
  - image_path: assets/img/IMG_5336.jpg
  - image_path: assets/img/IMG_5337.jpg 
  - image_path: assets/img/IMG_5338.jpg
  - image_path: assets/img/first.jpg
  - image_path: assets/img/second.jpg 
  - image_path: assets/img/third.jpg

---

# Overview of the Part and Application
* The final part is a spool holder for a filament printer. The plastic is placed on the holder and fitted through the tube, which is also held in place with the part.
*	People are often not able to reach the filament spool at the back of the printer, so the holder places the spool on top of the printer, where people can reach it. 
*	The project is meaningful because it attempts to aid the digital fabrication lab. Since I’ve used the space myself, it felt great to attempt to give something back to the lab.

# Preserve and Obstacle Geometry
*	There were three preserves in the model: the first was the part that clasps onto the printer, the second was the part that holds the spool, and the third was the filament tube holder.
*	There were the three obstacles in the model: the printer base, the filament spool, and the filament tube.

# Load Case Application and Structural Constraints
*	I applied the weight/gravity from the mass of the filament spool.
*	The direction of gravity on the holder was down and the magnitude of the force was determined by gauging a rough estimate of the mass of the spool.
*	A fixed constraint was used on the tube holder to lock it in place.
*	The real-world prototype was tested by lodging it onto a filament printer with a spool in the digital fabrication lab.

# Critique of Generative Design
*	Generative design is very useful, especially for larger engineering projects with more components that need to be connected. Often, this would be removing design processes for parts that only serve the purpose of connecting everything together.
*	One of the limitations of the process is that it has to be very well defined to produce a final product of the audience’s liking. Projects that are vaguer may suffer from designs that may not workout perfectly since there are so many possibilities of what the final design could be. This is why obstacle geometry is also extremely important, to account for any other materials that would interact with the project.
*	In fields like the aerospace and automative industries, generative design can help create parts like frames and mounts that are essential for connecting parts in payloads. Similarly, architecture and construction industries can use generative design for support structures. The largest shortfall of generative design is that it produces too many options. More options are produced when the preserves and obstacles are less defined. With larger projects, it can be more tedious to filter through different designs.

# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a46326bff81784e53e?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a453d96421196d200b?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Forces

| Name of Force         || Magnitude             || Location              || Reasoning             |
| -------------         || -------------         || -------------         || -------------         |
| Weight                || 250 N                 || Spool holder          || Gravity weighs it down|

# Different Generated designs from CAD
* Three designs were generated and the pictures are attached below.

{% include gallery caption="Generative Design Gallery" %}
