#pragma once
#include <stdint.h>

// Piny základne (ESP32 DevKitC).
// Musia zodpovedať tabuľke pinov: 03_Navrh/tabulka_pinov.xlsx (hárok "Základňa").
// Zmena sa robí v tabuľke aj tu naraz.
//
// KOSTRA: čísla pinov sa doplnia po nákupe presných súčiastok (návod: 03_Navrh/navod_tabulka_pinov.docx).
// Kým pin nie je pridelený, má hodnotu PIN_NEPRIDELENY a program ho preskočí.

constexpr uint8_t PIN_NEPRIDELENY = 255;

// Mikrofón INMP441 (I2S)
constexpr uint8_t PIN_MIK_SCK = PIN_NEPRIDELENY;  // hodiny (BCLK)
constexpr uint8_t PIN_MIK_WS  = PIN_NEPRIDELENY;  // výber kanála (LRCL)
constexpr uint8_t PIN_MIK_SD  = PIN_NEPRIDELENY;  // dáta z mikrofónu

// Stav batérie (ADC1, cez delič napätia, max. 3,3 V)
constexpr uint8_t PIN_BATERIA = PIN_NEPRIDELENY;

// Skúšobná LED / stav spojenia
constexpr uint8_t PIN_LED = PIN_NEPRIDELENY;
