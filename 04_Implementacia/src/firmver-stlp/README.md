# firmver-stlp

Program pre ESP32 v stĺpovej jednotke (kovový stĺp vedľa strelca, 10 m od terčov). Je to **návrh Ing. Hollého, ktorý sa overí testom vo Fáze 1.**

**Úlohy programu (návrh):** čítať dva digitálne mikrofóny INMP441 cez jednu zbernicu I2S (horný pre stoj vo výške 1100 mm, dolný pre ľah vo výške 300 mm), rozpoznať výstrel podľa hlasitosti nad prahom, po výstrele chvíľu ignorovať ďalší zvuk (mŕtvy čas asi 300 ms), merať čas medzi výstrelmi a poslať správu o výstrele do mobilu cez Bluetooth LE (druhé spojenie, prvé je s terčom). Prah citlivosti sa nastavuje z aplikácie.

**Zapojenie:** `03_Navrh/navrhy_zapojenia_a_konstrukcie-predajna_verzia/navrh_zapojenia_05_stlp_snimac_zvuku.pdf` (starší návrh z čias pred rozdelením na prototyp a predajnú verziu; či platí pre prototyp, je nepotvrdené). Čísla pinov budú v hárku „Stĺpová jednotka“ v `03_Navrh/tabulka_pinov.xlsx` a rovnaké v súbore `piny.h` v tomto priečinku. Zástupné názvy pinov: `I2S_SCK`, `I2S_WS`, `I2S_SD`, `PIN_LED`.

**Stav:** priečinok obsahuje zatiaľ len tento popis. Súbory (`platformio.ini`, `src/main.cpp`, `piny.h`) sa vytvoria po nákupe súčiastok pri prvej skúške vo Fáze 1. Nič z tohto programu zatiaľ nebolo napísané ani odskúšané.

**Nepotvrdené (otvorené):**
- Či máme powerbanku na napájanie stĺpovej jednotky a či sa nevypína pri malom odbere prúdu.
- Dĺžka stĺpa (asi 1,3 m) a dĺžka tieneného kábla k mikrofónom (asi 0,4 m), obe sa overia testom.
- Presný formát správy o výstrele (príklad v návrhu: číslo výstrelu, čas od prvého výstrelu, hlasitosť na dolnom a hornom mikrofóne). Mení sa spolu s aplikáciou a so zoznamom správ v dokumente 02_TECHNICKE_RIESENIE.
- Spoločný čas stĺpovej jednotky a terča (zatiaľ sa meria čas medzi výstrelmi priamo na stĺpe, oneskorenie Bluetooth ho neovplyvní).
- Knižnica a verzia balíka pre I2S v Arduino-ESP32 (overiť pri prvej skúške).

**Ako otvoriť (až keď tam budú súbory):** vo VS Code s rozšírením PlatformIO (File → Open Folder → priečinok `firmver-stlp`). Doska: `esp32dev`, framework Arduino. Rovnako ako pri `firmver-terc`.
