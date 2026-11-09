# firmver-terc

Program pre ESP32 v terčovej jednotke (na konštrukcii s terčmi).

**Úlohy programu:** čítať hallove senzory zásahu (10 terčov), ovládať servá (stavanie radov), ovládať motor krycieho plátu a koncové spínače, posielať správy do mobilu a prijímať príkazy cez Bluetooth LE. Popis je v dokumente 02_TECHNICKE_RIESENIE, kapitola 4.1.

**Súbory**
- `firmver-terc.ino` – hlavný súbor (zatiaľ len kostra, nie je odskúšaná).
- `piny.h` – čísla pinov. Musia zodpovedať tabuľke `03_Navrh/tabulka_pinov.xlsx`.

**Ako otvoriť:** v Arduino IDE 2 otvoriť `firmver-terc.ino`, dosku zvoliť „ESP32 Dev Module“. Názov priečinka sa musí zhodovať s názvom `.ino` súboru.
