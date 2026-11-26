# firmver-zakladna

Program pre **základňu**: druhé ESP32-WROOM-32U s externou anténou, umiestnené 2 m od strelca (8 m od konštrukcie s terčmi). Od 26. 11. 2026 nahrádza pôvodnú stĺpovú jednotku s dvoma mikrofónmi INMP441 (návrh Ing. Hollého). Priečinok sa pôvodne volal `firmver-stlp`, premenovaný 26. 11. 2026.

**Úlohy programu (návrh, nepotvrdené):**
- čítať dva snímače zvuku Keyes KY-037 (jeden pre ľah, jeden pre stoj; výšky podľa doterajšieho návrhu 300 mm a 1100 mm), rozpoznať výstrel, po výstrele chvíľu ignorovať ďalší zvuk, merať čas medzi výstrelmi,
- čítať snímače počasia (rýchlosť vetra, smer vetra, teplota, vlhkosť a tlak; typy snímačov ešte nie sú vybrané),
- prijímať údaje z terčovej jednotky (ESP32 na konštrukcii),
- posielať všetky údaje do mobilu trénera. Mobil sa pripája len k základni.

Spolu sa kupujú 6 ks KY-037 (2 do prevádzky, 4 náhradné). Prah citlivosti a ďalšie nastavenia sa budú nastavovať z aplikácie (nepotvrdené).

**Zapojenie:** zapojenie snímačov zvuku a ostatných snímačov je **nerozhodnuté**, preto tu nie je uvedené. Čísla pinov budú v hárku „Základňa“ (predtým „Stĺpová jednotka“) v `03_Navrh/tabulka_pinov.xlsx` a rovnaké v súbore `piny.h` v tomto priečinku (súbor zatiaľ neexistuje).

**Stav:** priečinok obsahuje zatiaľ len tento popis. Súbory (`platformio.ini`, `src/main.cpp`, `piny.h`) sa vytvoria po nákupe súčiastok pri prvej skúške vo Fáze 1. Nič z tohto programu zatiaľ nebolo napísané ani odskúšané.

**Nepotvrdené (otvorené):**
- Typ spojenia terčová jednotka – základňa (aj to, či stačí dosah ESP32 na 8 m s anténou; zistí sa vo Fáze 1) a smer príkazov mobil → základňa → terč.
- Typ spojenia základňa – mobil (zatiaľ Bluetooth LE ako doterajší návrh).
- Napájanie základne (či powerbanka, nevypína sa pri malom odbere prúdu?) a stojan alebo uchytenie základne.
- Napätie na analógovom výstupe KY-037: obchod uvádza napájanie 5 V, ESP32 znesie na vstupe len 3,3 V. Overí sa pred zapojením.
- Presný formát správy o výstrele a o počasí. Mení sa spolu s aplikáciou a so zoznamom správ v dokumente 02_TECHNICKE_RIESENIE.
- Spoločný čas základne a terčovej jednotky.
- Typy snímačov počasia (anemometer, snímač smeru vetra, jeden snímač teploty, vlhkosti a tlaku) a kto ich vyberie.
- Dosah ESP32 a to, či anténa 2,4 GHz neporušuje pravidlá, alebo či sa pri jej frekvencii niečo nehlási alebo neplatí (zisťuje Matej vo Fáze 1).

**Ako otvoriť (až keď tam budú súbory):** vo VS Code s rozšírením PlatformIO (File → Open Folder → priečinok `firmver-zakladna`). Doska: `esp32dev`, framework Arduino (presný názov dosky pre PlatformIO sa overí po kúpe). Rovnako ako pri `firmver-terc`.
