# Seven-segment-clock-display-timer
This sketch shows you how to use a clock seven segment display to implement a simple timer. The display is used to display the amount of time in minutes and seconds that has elapsed since the sketch started running on the Arduino.<br>
Components
   - Arduino Uno
   - 5 x 330 Ohm resistor for the 4 digits and 1 colon
   - Breadboard
   - Jumper wires
  
   Libraries 
   - SevSeg

  Connections
 
   Connect display pins for digits 1, 2, 3, 4 to
   Arduino pins 2, 3, 4, 5.
   
   Connect pins for segments A, B, C, D, E, F, G, DT to
   Arduino pins 6, 7, 8, 9, 10, 11, 12, 13.
   
   If you want to display the divider LED (":") of the 
   display, connect its anode to Arduino's 5V pin, and the
   cathode to Arduino's GND pin, via a 330 Ohm resistor.
