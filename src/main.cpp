
#include <Arduino.h>

#include "HX8357.h"

extern "C" {
#include "sdk_spi.h"
#include "spi_interface.h"
}

HX8357 display = HX8357();

void setup() {
  Serial.begin(115200);
  while (!Serial) {};

  Serial.println("Initializing Display...");

  display.begin();

  display.setRotation(LANDSCAPE_RIGHT);

  display.setCursor(10, 10);
  display.setTextSize(10);
  display.setTextColor(0x4FE9);
  display.print("Hacked!");

}

void loop() {

}
