# src – zdrojové súbory projektu

| Priečinok | Čo obsahuje | Kto |
|---|---|---|
| `firmver-terc/` | program pre ESP32-WROOM-32U v terčovej jednotke na konštrukcii (snímanie zásahu, servá, krycí plát, posielanie údajov do základne; typ spojenia s ňou je nepotvrdený) | Matej |
| `firmver-zakladna/` | program pre druhé ESP32-WROOM-32U, základňu 2 m od strelca (2 snímače zvuku KY-037, snímače počasia, príjem údajov z terčovej jednotky, spojenie s mobilom trénera). Pôvodne stĺpová jednotka s mikrofónmi INMP441, zmenené 26. 11. 2026; priečinok sa pôvodne volal `firmver-stlp`. Zatiaľ len popis | Matej |
| `aplikacia-android/` | mobilná aplikácia (Android Studio, Kotlin, Jetpack Compose), spája sa len so základňou (údaje z terča aj o výstreloch a počasí idú cez ňu); typ spojenia je nepotvrdený | Matej |
| `mechanika-3d/` | 3D modely a podklady na výrobu konštrukcie | Sára |
| `elektronika/` | benchmarking, schémy, kusovníky, technické listy a parametre elektrotechnických súčiastok | Sára |

## Pravidlá
- Čísla pinov sú v tabuľke `03_Navrh/tabulka_pinov.xlsx` a rovnaké v súbore `piny.h` vo `firmver-terc/` (pre základňu vo `firmver-zakladna/`). Zmena sa robí na oboch miestach naraz a oznámi sa druhému.
- Komunikačný protokol (zoznam správ) je v dokumente 02_TECHNICKE_RIESENIE, kapitola 5. Zmena sa robí naraz vo firmvéri aj v aplikácii.
- Každá zmena postupu sa zapisuje do `06_Dokumentacia/dokumentacia_postup_prac.docx`.
