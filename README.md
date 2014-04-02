## Rainbow Cube Synthesizer ##

The Rainbow Cube Synthesizer is a quick fun project that utilizes a series of RGB LEDs, MIDI communication over  Teensy, and Max/MSP.

You can find a wealth of information on how the TLC5940 (PWM Driver IC) interfaces with microcontrollers at the following links.

- Teensy: [http://www.pjrc.com/teensy/td_libs_Tlc5940.html](http://www.pjrc.com/teensy/td_libs_Tlc5940.html)
- Arduino: [http://wiki.t-o-f.info/Arduino/ExempleD%C3%A9multiplexeurPWMTLC5940?from=Arduino.TLC5940](http://wiki.t-o-f.info/Arduino/ExempleD%C3%A9multiplexeurPWMTLC5940?from=Arduino.TLC5940)

To initialize the Max patch, you must double click the `ctlout` object and then set the output to `LED OUPUT` for the cube to receive MIDI messages.

Demonstration Video: [http://youtu.be/sK3oy1YD3zg](http://youtu.be/sK3oy1YD3zg)

![](https://farm6.staticflickr.com/5239/13589997655_2bb61a79f1_o.jpg)

