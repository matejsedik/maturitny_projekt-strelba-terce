// firmver-zakladna – program pre ESP32 v základni.
// Zatiaľ len kostra: nastavenie pinov podľa piny.h. Funkcie sa pridávajú po fázach
// (Fáza 1: mikrofón, ESP-NOW a Bluetooth s LED, Fáza 2: preposielanie správ, Fáza 3: detekcia výstrelu s časom).

#include "piny.h"

// Nastaví pin, len ak je v piny.h pridelený.
static void nastavPin(uint8_t pin, uint8_t rezim) {
  if (pin != PIN_NEPRIDELENY) pinMode(pin, rezim);
}

void setup() {
  Serial.begin(115200);
  nastavPin(PIN_LED, OUTPUT);
}

void loop() {
  // TODO Fáza 1: čítať mikrofón (I2S) a počítať hlasitosť v oknách 5–10 ms.
}
