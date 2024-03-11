#include "pico.h"

void setup() {
  Serial.begin(9600);
  servoInit();
}

void loop() {
  FR();
  FL();
  BR();
  BL();

  conteo();

  adelante1();
  adelante2();
  adelante3();
  adelante4();

 //------------------------------------
  servoOut();

  //Print();
}