# firmver-terc

Program pre ESP32 v terčovej jednotke (na konštrukcii s terčmi).

**Úlohy programu:** čítať optické vidlicové snímače zásahu (10 terčov), ovládať servá (stavanie radov), ovládať motor krycieho plátu a optické koncové snímače, posielať údaje do základne (druhé ESP32 2 m od strelca, ktorá ich posiela do mobilu) a prijímať príkazy. Od 26. 11. 2026 jedno ESP32-WROOM-32U s externou anténou obsluhuje oba rady aj motor krycieho plátu; typ spojenia terč – základňa je nepotvrdený. Popis je v dokumente 02_TECHNICKE_RIESENIE, kapitola 4.1.

**Súbory**
- `firmver-terc.ino` – hlavný súbor (zatiaľ len kostra, nie je odskúšaná).
- `piny.h` – čísla pinov. Musia zodpovedať tabuľke `03_Navrh/tabulka_pinov.xlsx`.

**Ako otvoriť:** vo VS Code s rozšírením PlatformIO (File → Open Folder → priečinok `firmver-terc`). Doska: `esp32dev` (vývojová doska s ESP32-WROOM-32U; rozloženie pinov a presný názov dosky pre PlatformIO sa overí po jej kúpe), framework Arduino. PlatformIO potrebuje v priečinku súbor `platformio.ini` a zdrojové súbory v podpriečinku `src/`. **Stav: ešte nepripravené** – súbory `firmver-terc.ino` a `piny.h` sú zatiaľ v hlavnom priečinku a `platformio.ini` tu nie je. Prenesie sa to pri prvej skúške s doskou (PlatformIO je nainštalované, s doskou zatiaľ neskúšané).
