# 7-segment-display
The purpose of this file is to use the Arduino as a decoder for a BCD to 7 segment LED display employing the shift register used previously as the basis for this design as well.  Whereas with the bargraph we were only lighting up one LED at a time, this design will require lighting up more than one LED at a time to configure the digits.

Circuit of Seven Segment Display:

![Picture1](https://user-images.githubusercontent.com/102126445/160236312-94760b58-ccb4-43f1-819b-620fe9fd6890.png)

1 DIP switch (DIP stands for Dual In-Line, so a DIP switch is made of switches which connect like a DIP IC)

1	10k ohm resistor

1	Arduino

1	7 segment display

7 	470 ohm resistors

Hardware Prep:
1)	You used the 74HC164 or 74HC595 before with the bargraph.  See the appendix for more information.  Remember that all ICs require power whether it shows on the schematic or not.  Pin 14 gets 5V and pin 7 goes to Ground.
2)	Read the datasheet for the display located at the end of this document and understand it.  The display is common Anode which means that the Shift Register will be completing the path to ground by going low (called sinking) to turn on one segment.  Always use a resistor in series with an LED.  It is recommended to use 240 or higher ohm to keep the brightness level down.  If you are simulating this it probably does not matter what value you use.
3)	If you are not familiar with the DIP Switchs, they are just 4 switches arranged in order of 4 bits.
4)	Note the use of a resistor pulldown for this lab.  See the layout of one in the appendix.  It will simplify your breadboard when wiring-in pulldowns for the DIP Switch.  Make sure you know where pin 1 is as that is the common connection you will connect to ground.

