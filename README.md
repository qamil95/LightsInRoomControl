# LightsInRoomControl
First microcontroller project, that I'm going to use in real house. The plan is to allow controlling of multuiple mini lights (many LED strips), put inside living room.

## List of used strips:
- 10 diodes, using 3V power supply with R100 resistor inside. Could be connected directly to 3V3 power supply on Arduino, since it takes less than 10mA. Would be placed between wardrobes.
- 2 * 20 diodes, using 5V power suppy with R47 resistor on each 20-diodes half. It should be connected through transistor, because all diodes takes 50mA. Would be placed around entrance door.
- some LED strips, would be placed inside wardrobe, still to calculate how much of this. I already own 12V led strip, so it would require separate power supply with transistor.

## Control logic
I'm going to create panel with 3 buttons, each of them would be controlling one mentioned light source. All ones would be on only if light level inside room is low enough (controllable using potentiometer). Additionally, wardrobe one would be on only if doors are open (detected using magnetic sensor). 