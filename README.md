# Backpacking MPPT Solar Charger
Solar charger designed to charge lithium ion cells directly, bypassing USB charging circuit.  

## Features

Advantages of this design:
* Very high efficiecy buck converter
* Psuedo MPPT tracking using BQ24650 chip
* Intergrated power meter and battery charge status
* Passthrough charging to charge device and battery simultaneously
* Integrated battery attachment for simple attachment to pack while hiking
* Adjustable to different panel voltages
* Avoid 2 stage voltage drop to cells for higher total efficiency (solar -> battery vs solar -> USB -> battery)
* Magnetic battery contacts designed to avoid reverse polarity connection
* Compatability with both Nitecore NL2150RX and Vapcell P2150A

## PCB
* Designed with easyeda software
* PCBA assembled by JLCPCB
* Primary components:
*   BQ24650 - mppt solar battery charging chip
*   ATTINY1616 - arduino compatable microcontroller
*   INA181A2 - current sense amplifier for power calculation

## 3D Printed Parts
* Housing (printed with ASA)
* Positve and negative battery contacts (printed with PETG)
*   Printing of the positive contact was paused to allow installation of the magnet into the housing before lip printed

## Purchased Parts
* Magents from K&J (D42AH and D62SH)
*   High temperature magnets to allow soldering without demagnetization
* Sn42Bi58 solder for attaching wire to magnets at low temperature
* 20AWG silicone flexible wire (red and black)
* 0.49" SSD1306 OLED
* Lixada solar panel

## Assembly
Testing of the performance was completed by modifying a Lixada solar panel purchased from Amazon

Installation steps:
* Carefully remove solar to USB module from panel using a razor blade to cut adhesive under module and a soldering iron to desolder leads from panel
* Scrape any remaining adhesive off and clean with alcohol
* Solder new assembled pcb with housing and leads to panel
* Use epoxy to glue housing to panel


