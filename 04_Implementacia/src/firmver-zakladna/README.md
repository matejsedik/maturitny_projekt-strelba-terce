# firmver-zakladna

Program pre ESP32 v základni (pri strelcovi).

**Úlohy programu:** počúvať mikrofón INMP441 a detegovať výstrely, merať všetky časy, prepájať správy medzi terčom (ESP-NOW) a mobilom (Bluetooth). Popis je v dokumente 02_TECHNICKE_RIESENIE, kapitola 4.2.

**Súbory**
- `firmver-zakladna.ino` – hlavný súbor (zatiaľ len kostra, nie je odskúšaná).
- `piny.h` – čísla pinov. Musia zodpovedať tabuľke `03_Navrh/tabulka_pinov.xlsx`.

**Ako otvoriť:** v Arduino IDE 2 otvoriť `firmver-zakladna.ino`, dosku zvoliť „ESP32 Dev Module“. Názov priečinka sa musí zhodovať s názvom `.ino` súboru.
