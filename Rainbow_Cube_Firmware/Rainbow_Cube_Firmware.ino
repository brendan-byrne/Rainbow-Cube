int cc;
int ccValue;

int ccArray[] = {20, 21, 22, 30, 31, 32, 40, 41, 42, 50, 51, 52};

void OnControlChange(byte channel, byte control, byte value) {
  cc = control;
  ccValue = value;
}

#include "Tlc5940.h"

void setup() {
  usbMIDI.setHandleControlChange(OnControlChange);
  Tlc.init();
  Tlc.set(0, 4000);
}

void loop()
{
  usbMIDI.read();
  for (int x=0; x<12; x++) {
    if (cc == ccArray[x]) Tlc.set(x, ccValue*32);
  }
  Tlc.update();
}

