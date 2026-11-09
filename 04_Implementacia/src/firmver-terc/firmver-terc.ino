// firmver-terc – program pre ESP32 v terčovej jednotke.
// Zatiaľ len kostra: nastavenie pinov podľa piny.h. Funkcie sa pridávajú po fázach
// (Fáza 1: hallov senzor a servo, Fáza 2: celý rad a Bluetooth LE, Fáza 3: druhý rad a krycí plát).

#include "piny.h"

// Nastaví pin, len ak je v piny.h pridelený.
static void nastavPin(uint8_t pin, uint8_t rezim) {
  if (pin != PIN_NEPRIDELENY) pinMode(pin, rezim);
}

void setup() {
  Serial.begin(115200);

  for (uint8_t pin : PIN_HALL_LAH)  nastavPin(pin, INPUT_PULLUP);
  for (uint8_t pin : PIN_HALL_STOJ) nastavPin(pin, INPUT_PULLUP);

  nastavPin(PIN_KONCAK_HORE, INPUT);  // vonkajší pull-up 10 kΩ, ak ide o pin 34–39
  nastavPin(PIN_KONCAK_DOLE, INPUT);

  nastavPin(PIN_LED, OUTPUT);
}

void loop() {
  // TODO Fáza 1: čítať hallov senzor a vypisovať "hore/dole" do sériovej linky.
}
