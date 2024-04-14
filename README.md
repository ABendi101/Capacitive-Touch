# Capacitive-Touch Chip Project

I interfaced a TTP223B Capacitive touch chip with a Arduino Uno R3. 

Essentially when the capacitive touch sensor is activated by your touch, a LED light will turn on. You will notice if you touch the sensor with something that isnt conductive, the light will not light up.

The code is split into the main() function along with two others, button() and light().

The button() function checks the sensor for whether it is being touched or or not. The light() function activates and deactivates the LED light depending on the output of the button() function. To see first hands refer to the code and the comments.

For more in depth answers please refer to my wiki: https://github.com/ABendi101/Capacitive-Touch/wiki
