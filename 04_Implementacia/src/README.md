# src – zdrojové súbory projektu

| Priečinok | Čo obsahuje | Kto |
|---|---|---|
| `firmver-terc/` | program pre ESP32 v terčovej jednotke (snímanie zásahu, servá, krycí plát) | Matej |
| `firmver-zakladna/` | program pre ESP32 v základni (mikrofón, prepojenie ESP-NOW a Bluetooth) | Matej |
| `aplikacia-android/` | mobilná aplikácia (Android Studio, Kotlin, Jetpack Compose) | Matej |
| `mechanika-3d/` | 3D modely a podklady na výrobu konštrukcie | Sára |

## Pravidlá
- Čísla pinov sú v tabuľke `03_Navrh/tabulka_pinov.xlsx` a rovnaké v súbore `piny.h` vo `firmver-terc/` a `firmver-zakladna/`. Zmena sa robí na oboch miestach naraz a oznámi sa druhému.
- Komunikačný protokol (zoznam správ) je v dokumente 02_TECHNICKE_RIESENIE, kapitola 5. Zmena sa robí naraz vo firmvéri aj v aplikácii.
- Každá zmena postupu sa zapisuje do `06_Dokumentacia/dokumentacia_postup_prac.docx`.
