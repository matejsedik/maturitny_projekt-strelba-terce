#pragma once
#include <stdint.h>

// Piny terčovej jednotky (ESP32 DevKitC).
// Musia zodpovedať tabuľke pinov: 03_Navrh/tabulka_pinov.xlsx (hárok "Terčová jednotka").
// Zmena sa robí v tabuľke aj tu naraz.
//
// KOSTRA: čísla pinov sa doplnia po nákupe presných súčiastok (návod: 03_Navrh/navod_tabulka_pinov.docx).
// Kým pin nie je pridelený, má hodnotu PIN_NEPRIDELENY a program ho preskočí.

constexpr uint8_t PIN_NEPRIDELENY = 255;

// Optické vidlicové snímače zásahu LTH-301-05 (výstup fototranzistora, vstup s INPUT_PULLUP).
// Len piny s vnútorným pull-upom (nie GPIO34–39), vonkajší odpor netreba.
constexpr uint8_t PIN_ZASAH_LAH[5]  = {PIN_NEPRIDELENY, PIN_NEPRIDELENY, PIN_NEPRIDELENY, PIN_NEPRIDELENY, PIN_NEPRIDELENY};
constexpr uint8_t PIN_ZASAH_STOJ[5] = {PIN_NEPRIDELENY, PIN_NEPRIDELENY, PIN_NEPRIDELENY, PIN_NEPRIDELENY, PIN_NEPRIDELENY};

// Servá na stavanie radov
constexpr uint8_t PIN_SERVO_LAH  = PIN_NEPRIDELENY;
constexpr uint8_t PIN_SERVO_STOJ = PIN_NEPRIDELENY;

// Motor krycieho plátu (driver TB6612FNG; STBY a PWMA sú natrvalo na 3,3 V)
constexpr uint8_t PIN_MOTOR_IN1     = PIN_NEPRIDELENY;
constexpr uint8_t PIN_MOTOR_IN2     = PIN_NEPRIDELENY;

// Optické koncové snímače plátu LTH-301-05 (vstup s INPUT_PULLUP, len piny s vnútorným pull-upom, nie GPIO34–39)
constexpr uint8_t PIN_KONCAK_HORE = PIN_NEPRIDELENY;
constexpr uint8_t PIN_KONCAK_DOLE = PIN_NEPRIDELENY;

// Stav batérie (ADC1, cez delič napätia, max. 3,3 V)
constexpr uint8_t PIN_BATERIA = PIN_NEPRIDELENY;

// Signalizačná / skúšobná LED
constexpr uint8_t PIN_LED = PIN_NEPRIDELENY;
