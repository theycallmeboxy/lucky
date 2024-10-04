# Lucky
*A 40-49 key 13 column (mostly) ortho keyboard with fun and easy kitting*

<img src="https://github.com/theycallmeboxy/lucky/blob/main/img/lucky_build-options.jpg" alt="keyborb" width="600"/>

**[KLE](https://www.keyboard-layout-editor.com/##@_name=Lucky%2F_vial&author=theycallmeboxy%3B&@=0,0&=0,1&=0,2&=0,3&=0,4&_c=%23ffb5ec%3B&=0,5&=0,6&=0,7&_c=%23cccccc%3B&=0,8&=0,9&=0,10&=0,11&=0,12&_x:0.25&c=%23ffb5ec&w:1.5%3B&=0,5&_x:0.25&w:1.25&h:2&w2:1.5&h2:1&x2:-0.25%3B&=1,7%3B&@_c=%23cccccc%3B&=1,0&=1,1&=1,2&=1,3&=1,4&_c=%23ffb5ec%3B&=1,5&=1,6&=1,7&_c=%23cccccc%3B&=1,8&=1,9&=1,10&=1,11&=1,12&_x:0.25&c=%23ffb5ec&w:1.75%3B&=1,5%3B&@_c=%23cccccc%3B&=2,0&=2,1&=2,2&=2,3&=2,4&_c=%23ffb5ec%3B&=2,5&=2,6&=2,7&_c=%23cccccc%3B&=2,8&=2,9&=2,10&=2,11&=2,12&_x:0.25&c=%23ffb5ec&w:1.25%3B&=2,5&_w:1.75%3B&=2,7%3B&@_c=%23ffba9c%3B&=3,0&=3,1&=3,2&_c=%23fffaa8&w:2.25%3B&=3,4&=3,5&=3,7&_w:2.75%3B&=3,8&_c=%23a6ffdf%3B&=3,10&=3,11&=3,12%3B&@_y:0.25&c=%23ffba9c&w:1.5%3B&=3,0&_w:1.5%3B&=3,2&_c=%23fffaa8&w:2.75%3B&=3,4&=3,5&=3,7&_w:2.25%3B&=3,8&_c=%23a6ffdf&w:1.5%3B&=3,10&_w:1.5%3B&=3,12%3B&@_y:0.25&x:3&c=%23fffaa8&w:7%3B&=3,5)**

## Production Files:

*(Click a link then click the raw or download link in the top right to download a given file.)*

> [!CAUTION]
> I will assume no responsibility for any cost, damage, or sads resulting from trying to make one of my dumb projects. This project has no implicit support, neither moral nor technical.
> 
> **I'm not a doctor. This is not medical advice. I'm also only a network engineer. You assume all liability in using or reproducing these files.**

3DP Case:
- [Bottom case .stl file](https://github.com/theycallmeboxy/lucky/blob/main/models/draft%201/3dp/Bottom%20Case.stl)
- [Top case .stl file](https://github.com/theycallmeboxy/lucky/blob/main/models/draft%201/3dp/Top%20Case.stl)

CNC Case:
- [Bottom case .step file](https://github.com/theycallmeboxy/lucky/blob/main/models/draft%201/cnc/Bottom%20Case.step)
- [Top case .step file](https://github.com/theycallmeboxy/lucky/blob/models/draft%201/cnc/Top%20Case.step)
- [Top case thread drawing .pdf file](https://github.com/theycallmeboxy/lucky/blob/main/models/draft%201/cnc/Top%20Case%20Drawing.pdf)

Plate:
- [Plate .dxf file](https://github.com/theycallmeboxy/lucky/blob/main/models/draft%201/plate/1.6mm%20plate.dxf)

PCB:
> [!WARNING]
> Please note there is a defect in PCB version 1 resulting is a missing
> column wire requiring a bodge; version 1.1 fixes this but has not yet been produced.  If by an act of God you have a v1 PCB here are the [bodge instructions](https://github.com/theycallmeboxy/lucky/blob/main/img/bodge-instructions.png).

- [PCB gerbers .zip file](https://github.com/theycallmeboxy/lucky/blob/main/pcb/lucky%20v1.1/production/lucky1.1.zip)
- [BOM .csv file](https://github.com/theycallmeboxy/lucky/blob/main/pcb/lucky%20v1.1/production/bom.csv)
- [Positions .csv file](https://github.com/theycallmeboxy/lucky/blob/main/pcb/lucky%20v1.1/production/positions.csv)

Firmware:
- [VIAL Firmware .bin file](https://github.com/theycallmeboxy/lucky/blob/main/firmware/vial/binary/boxy_lucky_vial.bin)
  
## Build Notes:

I have made with FDM and CNC aluminum to good effect.

You will need some hardware for either draft 1 case...

**For both versions:**
 
  - 10 m2x6mm flat screws [such as these     ](https://www.amazon.com/gp/product/B000NHYRAY/)
    
   - 16 20mmx3mm gaskets, either 2mm thick foam   [like    these](https://www.aliexpress.us/item/3256805527606478.html)  or
    1.5mm thick silicone   [like these](https://www.aliexpress.us/item/3256802713311572.html)
    
   - 4 SKUF feet like these  [like    these](https://keeb.io/products/skuf-silicone-rubber-keyboard-feet)
 
 **For the 3dp version:**
 
  - 10 m2x3mmx3.5mm heat set inserts   [such as    these](https://www.amazon.com/gp/product/B0C1ND29M7/)

 1. Install heatset inserts, if applicable.   
 2. Apply feet to the cutouts.
 3. Install stabs if you're into that. 
 4. Install switches into the plate and PCB.
 5. Solder it up.
 6. Gaskets on both sides of the plate tabs.
 7. Screw it together from the bottom.
