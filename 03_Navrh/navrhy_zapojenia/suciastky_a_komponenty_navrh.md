# Súčiastky a komponenty: návrh nákupného prehľadu

Stav z 18. 11. 2026. Je to **návrh na diskusiu**, nie objednávka. Nič z toho nie je zatiaľ kúpené.

## Ako to čítať

- Počty kusov sú z dokumentu Komponenty (prototyp, vrátane rezervy).
- **Ceny tu zámerne nie sú.** Pri nákupe ich treba pozrieť priamo v obchode.
- Odkazy som našiel vyhľadávaním. Pred objednávkou treba skontrolovať, či je tovar skladom a či súčiastka sedí s popisom (označené „overiť“).
- „nenájdené“ znamená, že konkrétny odkaz som nenašiel. Tam je len typ súčiastky alebo kategória.
- Obchody: [Techfun](https://techfun.sk) a [rlx.sk](https://rlx.sk) (SK), [LaskaKit](https://www.laskakit.cz/en/), [GM electronic](https://www.gme.cz) a [Hadex](https://www.hadex.cz) (CZ).
- Veci, ktoré ešte nie sú rozhodnuté (verzia ESP32, pohon plátu), sú vedené ako alternatívy. Snímač zvuku je navrhnutý (INMP441 na stĺpe pri strelcovi, bod 2), ale návrh učiteľa ešte treba potvrdiť s Ing. Hollým a overiť testom vo Fáze 1.

---

## 1. Riadiaca jednotka (ESP32): vyber jednu alternatívu

Obe alternatívy sa programujú rovnako (rovnaké piny a rovnaký kód). Rozdiel je len v anténe.

| | Alternatíva A: WROOM-32 (vstavaná anténa) | Alternatíva B: WROOM-32U (externá anténa) |
|---|---|---|
| Čo to je | vývojová doska ESP32 s anténou priamo na module | vývojová doska ESP32 s konektorom U.FL, anténu treba pripojiť |
| Výhoda | najjednoduchšie, nič navyše | dá sa vyviesť anténa nad oceľový štít, ak bude signál slabý |
| Nevýhoda | oceľový štít môže tlmiť signál (overí sa vo Fáze 1) | treba dokúpiť anténu, bez nej nepoužívať |
| Počet | 3 (terč, stĺp so snímačom zvuku, rezerva) | 3 (terč, stĺp so snímačom zvuku, rezerva) a antény (stĺp ju pravdepodobne nepotrebuje, overiť) |
| Odkaz | [ESP32-WROOM-32D vývojová doska (Techfun)](https://techfun.sk/produkt/esp32-wroom-32d-vyvojova-doska-wifi-a-bluetooth/), alternatíva: [ESP32-DevKitC od Espressif (rlx.sk)](https://rlx.sk/en/6604-esp32-devkitc-espressif-powered-by-the-esp32-wroom-32-module.html) | [ESP32-WROOM-32U vývojová doska so socketom pre anténu (Techfun)](https://techfun.sk/produkt/esp32-wroom-32u-vyvojova-doska-so-socketom-pre-antenu/) |
| Anténa k B | | [mini anténa 3 dB, 2,4 GHz, U.FL (LaskaKit)](https://www.laskakit.cz/en/mini-antena-3db-2-4g-u-fl--ipex--konektor/) alebo [anténa 45×10 mm, 5 dB, U.FL (LaskaKit)](https://www.laskakit.cz/en/wifi-45x10mm-antena-2-4g--5db-u-fl--ipex1--konektor/). Na výber je aj pigtail U.FL → RP-SMA, ak by anténa mala iný konektor. Overiť, že konektor antény je U.FL/IPEX. |

---

## 2. Snímanie

| Súčiastka | Ks | Čo robí a na čo bude | Kde kúpiť |
|---|---|---|---|
| Optický vidlicový snímač **TCST2103** (zásah) | 12 (10 + 2 rezerva) | Vidlica s IR LED a fototranzistorom, štrbina 3,1 mm. Stojí v mieste, kam dopadne hlavička doštičky. Hlavička v štrbine preruší lúč a to je zásah. | [Optická závora TCST2103 (Techfun)](https://techfun.sk/produkt/opticka-zavora-tcst2103/), alternatívy: [GM electronic](https://gme.cz/tcst2103), [TME](https://www.tme.eu/en/details/tcst2103/pcb-photoelectric-sensors/vishay/) |
| Optický vidlicový snímač **TCST2103** (koncové polohy plátu) | 4 | Rovnaký typ. Označuje hornú a dolnú polohu krycieho plátu, keď výčnelok plátu preruší lúč, motor sa zastaví. | rovnaký odkaz ako vyššie |
| **Mikrofón INMP441** (I2S modul, snímač zvuku výstrelu) | 3 (2 + 1 rezerva) | Digitálny MEMS mikrofón s rozhraním I2S, napájanie 3,3 V. Dva kusy sú na stĺpe pri strelcovi (300 mm pre ľah, 1100 mm pre stoj) a dostanú sa na jednu I2S zbernicu stĺpovej ESP32. Zachytí výstrel, prvý výstrel spustí časovač a piaty ho zastaví. Zvukový otvor je dierka v doske, nesmie sa zakryť. Overiť, či sú k modulu priložené piny (inak treba doletovať). Umiestnenie je návrh učiteľa, ešte treba potvrdiť s Ing. Hollým. | [INMP441 modul I2S mikrofónu (LaskaKit)](https://www.laskakit.cz/en/inmp441-modul-i2s-mikrofonu/) |
| **Tienený kábel a vodiče k mikrofónom** | asi 2 × 0,4 m + rezerva | Krátke spojenie krabičky s ESP32 s oboma mikrofónmi (SCK, WS, SD, 3V3, GND). Dĺžku a tienenie overiť testom vo Fáze 1. | nenájdené |
| **Penový kryt (windscreen) na mikrofón** | 2 až 3 | Tlmí vietor a údery tlakovej vlny na mikrofóne. Nesmie zakryť zvukový otvor. | nenájdené |

### Snímač zvuku: prečo INMP441 a čo sme vyradili

| Typ | Čo to je | Stav | Odkaz |
|---|---|---|---|
| **INMP441** | digitálny I2S mikrofón, 3,3 V, podľa datasheetu znesie až 120 dB SPL, dva kusy na jednej zbernici (pin L/R určuje kanál) | **navrhnutý** | [LaskaKit](https://www.laskakit.cz/en/inmp441-modul-i2s-mikrofonu/) |
| MAX9814 | mikrofón so zosilňovačom s automatickým nastavením zosilnenia (AGC) | vyradený: po hlasnom zvuku zníži zosilnenie, takže hlasitosti po sebe idúcich výstrelov nie sú porovnateľné | [Techfun](https://techfun.sk/produkt/mikrofon-modul-max9814-s-adaptivnym-zoslnovacom/), [LaskaKit](https://www.laskakit.cz/en/max9814-cma-4544pf-w-modul-mikrofonu-s-zesilovacem-max9814/), [rlx.sk](https://rlx.sk/en/speech-recognition/2370-electret-microphone-amplifier-max9814-with-auto-gain-control-adafruit-1713.html) |
| I2S mikrofón SPH0645 | digitálny mikrofón s I2S, drahší ako INMP441 | záloha, ak INMP441 nebude stačiť | [LaskaKit](https://www.laskakit.cz/en/gy-sph0645lm4h-modul-i2s-mikrofonu/) |
| MAX4466 | analógový mikrofón so zosilňovačom s nastaviteľným zosilnením (trimrom) | iba núdzová záloha (analógový signál na kábli ruší) | [LaskaKit](https://www.laskakit.cz/en/gy-4466-modul-mikrofonu-s-zesilovacem-max4466/) |
| Digitálny zvukový senzor (typ KY-038) | modul s mikrofónom a komparátorom, prahom nastaviteľným trimrom, dáva signál 0/1 | iba núdzová záloha | [LaskaKit](https://www.laskakit.cz/en/arduino-zvukovy-senzor/) |

Poznámka: či INMP441 zvládne hlasitosť výstrelu zo vzduchovky a či sa výstrel bezpečne rozpozná (5 výstrelov = presne 5 detekcií), sa musí overiť testom vo Fáze 1 (overiť). Skupina všetkých snímačov zvuku od LaskaKitu: [Sound Sensors](https://www.laskakit.cz/en/sound/).

---

## 3. Pohyb

| Súčiastka | Ks | Čo robí a na čo bude | Kde kúpiť |
|---|---|---|---|
| **Servo MG996R** | 3 (2 + rezerva) | Natočí sa na presný uhol. Jedno servo na rad otáča zdvíhaciu lištu, ktorá postaví spadnuté doštičky. Má kovové prevody. | [Techfun](https://techfun.sk/produkt/servo-motorcek-mg996r/), [rlx.sk](https://rlx.sk/en/servo-motor/7278-mg996r-servo-motor-metal-gear-high-torque-ws-15299.html) |
| **Motorček s prevodovkou** 6–12 V | 1 | Poháňa reťaz krycieho plátu. Prevodovka znižuje otáčky a zvyšuje silu. Presný typ nie je vybraný, napájanie je 6,0–8,4 V z batérie, takže treba verziu na toto napätie (overiť). Príklad: JGA25-370. | [Motor JGA25-370 12 V s prevodovkou (LaskaKit)](https://www.laskakit.cz/en/motor-jga25-370-12v-s-prevodovkou-/), ďalšie motory: [Hadex](https://www.hadex.cz/c/motorky-s-prevodovkou-1), [LaskaKit](https://www.laskakit.cz/en/motors/) |
| **Driver motora TB6612FNG** (alebo DRV8833) | 2 (1 + rezerva) | ESP32 nevie poháňať motor priamo. Driver spína väčší prúd a dovolí točiť motorom oboma smermi. TB6612FNG zvláda do 13,5 V, DRV8833 do asi 10 V. | [Techfun](https://techfun.sk/produkt/motor-driver-tb6612fng/), [rlx.sk](https://rlx.sk/en/motor-driver/3017-tb6612fng-dual-motor-driver-carrier-pololu-713.html). DRV8833: nenájdené |
| **Reťaz a reťazové kolesá** | asi 20 článkov, 2 kolesá (typ overiť) | Reťaz vedľa pravej prednej nohy zdvíha a spúšťa krycí plát. Typ a rozstup sa vyberie podľa motora. | nenájdené, len kategória: [valčekové reťaze (RS Components)](https://cz.rs-online.com/web/c/prenos-mechanickeho-vykonu/valeckove-retezy-a-prislusenstvi/valeckove-retezy/) |
| **Ozubený remeň GT2 + krokový motor** (alternatíva k reťazi, rozhodnutie vo Fáze 2) | podľa návrhu | Presnejšie než reťaz, ale drahšie a zložitejšie. | nenájdené |
| **Vodiace lišty** pre krycí plát | 2 | Plát sa v nich posúva zvisle. Typ nie je vybraný (možno hliníkový U-profil alebo 3D tlač). | nenájdené |

---

## 4. Napájanie

| Súčiastka | Ks | Čo robí a na čo bude | Kde kúpiť |
|---|---|---|---|
| **Li-ion článok 18650** | 2 (v sérii) | Batéria terčovej jednotky (2S, 7,4 V). Kupovať len od overeného predajcu s uvedenou kapacitou. | nenájdené |
| **Držiak na 2 články 18650** | 1 | Drží oba články a vyvádza vodiče. | [Techfun](https://techfun.sk/produkt/drziak-pre-dve-18650-li-ion-baterie/), [LaskaKit](https://www.laskakit.cz/en/bateriovy-box-2x18650-dratove-vyvody/) |
| **Nabíjací modul 2S s USB-C** (napr. IP2326) | 2 (1 + rezerva) | Nabije dva články v sérii z USB-C nabíjačky. Treba overiť, či sa dá nabíjať aj z bežnej nabíjačky mobilu. | [LaskaKit PD-IP2326 2–3S 1,5 A](https://www.laskakit.cz/en/la123029/) |
| **BMS 2S s vyrovnávaním** | 2 (1 + rezerva) | Chráni články pred prebitím, hlbokým vybitím a skratom a vyrovnáva napätie. | [LaskaKit: ochrana a balancér 2S 20 A](https://www.laskakit.cz/en/ochrana-li-ion-baterie-2s-20a/) |
| **Menič step-down A (6 V, ≥ 3 A)** | 2 | Napája servá. Musí zvládnuť aspoň 3 A. | [XL4015 5 A (LaskaKit)](https://www.laskakit.cz/en/step-down-menic-s-xl4015/), [XL4015 (GM electronic)](https://www.gme.cz/v/1507885/modul-dc-dc-menic-step-down-125-30v-5a-xl4015), [XL4015 (Hadex)](https://www.hadex.cz/p/m408-napajeci-modul-step-down-menic-5a-s-xl4015) |
| **Menič step-down B (5 V)** | 2 | Napája ESP32 a optické snímače. | [LM2596 (LaskaKit)](https://www.laskakit.cz/en/step-down-menic-s-lm2596/) alebo rovnaký XL4015 ako vyššie |
| **Poistka 5 A + držiak** | 1 + sada | Pri skrate preruší obvod. | [Sada sklenených poistiek 5×20 mm (Techfun)](https://techfun.sk/produkt/sada-100-kusov-najpouzivanejsich-poistiek-5x20/), [LaskaKit](https://www.laskakit.cz/en/sada-sklenenych-trubickovych-pojistek-5x20mm-100ks/). Držiak: nenájdené (v Hadexe a GM electronic je viac typov) |
| **Vypínač** | 1 | Zapína a vypína terč. | nenájdené |
| **Powerbanka s USB** (stĺpová jednotka) | 1 | Napája ESP32 stĺpovej jednotky cez USB. **Nepotvrdené, či ju máme.** Nesmie sa sama vypínať pri malom odbere prúdu (overiť testom). | nenájdené |
| **Kábel USB** (stĺpová jednotka) | 1 | Spojí powerbanku s ESP32 v krabičke na stĺpe. | nenájdené |

---

## 5. Zapájanie a drobnosti

| Súčiastka | Ks | Čo robí a na čo bude | Kde kúpiť |
|---|---|---|---|
| **Nepájivé pole 830 bodov** | 1 | Rýchle zapojenie bez spájkovania na skúšanie vo Fáze 1. | [Techfun](https://techfun.sk/produkt/nepajive-kontaktne-pole-830-bodov-transparentne/), [LaskaKit](https://www.laskakit.cz/en/nepajive-kontaktni-pole-830-pinu--bile/) |
| **Prepojovacie káble (dupont)** | sada | Prepájanie na nepájivom poli. | [Techfun 10 cm](https://techfun.sk/produkt/kabliky-40-kusov-10-cm/), [20 cm](https://techfun.sk/produkt/kabliky-40-kusov-20-cm/), [30 cm](https://techfun.sk/produkt/kabliky-40-kusov-30-cm/) |
| **Dierkovaná doska** | podľa návrhu | Trvalé zapojenie prototypu od Fázy 2, lebo nepájivé pole sa pri otrasoch uvoľňuje. | nenájdené |
| **Konektory JST (XH)** | sada | Rýchle a pevné odpojenie senzorov, serv a batérie. Jeden kábel na rad snímačov (7 vodičov). | [LaskaKit sada JST-XH 80 ks](https://www.laskakit.cz/en/laskakit-sada-jst-xh-konektoru-80ks/), [Hadex konektory](https://www.hadex.cz/c/kabelova-konfekce) |
| **Odpory** (10 kΩ, 100 kΩ, 33 kΩ, predradné pre LED snímačov) | sada | Pull-up pre snímače, delič na meranie batérie, predradný odpor LED (hodnotu určí datasheet, overiť). | [Resistor/LED/capacitor kit (Techfun)](https://techfun.sk/produkt/resistorledcapacitor-kit-plastovy-organizer/), [Hadex sady rezistorov](https://www.hadex.cz/c/sady-rezistoru) |
| **Kondenzátory** (100 nF, väčší elektrolyt pri servách) | sada | Vyhladzujú napätie pri servách, aby ESP32 nevypadávalo. | rovnaký kit, elektrolyt väčší: nenájdené |
| **LED** | pár ks | Skúšobný výstup a signalizácia na terči. | v kite vyššie |
| **Kábel USB a kábel do servo/motora, silnejšie vodiče** | podľa návrhu | Programovanie a napájanie. | nenájdené |

---

## 6. Mechanika a materiál

| Materiál | Na čo bude | Kde kúpiť |
|---|---|---|
| **Hliníkový profil HJ25TK2** (25×25×1,5 mm, eloxovaný) | 4 nohy a 4 horné priečky, asi 6,7 m (nákup 7–8 m narezaný na mieru) | [Aluhobby: HJ25TK2](https://www.aluhobby.sk/hlinikovy-profil--hj25tk2-elox/) |
| **Plastové spojky 253/KJ** (trojcestný roh) | 4 ks, hore v rohoch rámu | rovnaká stránka Aluhobby (typy 251/KJ a 252/KJ sú tiež tam) |
| **Hliníkový profil HJ25TK2: stĺp pre snímače zvuku** | asi 1,3 m navyše (dĺžku overiť), narezať na mieru spolu s ostatným | [Aluhobby: HJ25TK2](https://www.aluhobby.sk/hlinikovy-profil--hj25tk2-elox/). Na stĺp pridať podstavu (typ a stabilita sa overia skúškou). |
| **Oceľový plech 2–3 mm** | panely s otvormi, sklápacie doštičky, štít pre elektroniku | nenájdené (objednať narezaný presne na mieru, firmu treba vybrať) |
| **Plech alebo preglejka pre krycí plát** | krycí plát 456 × 140 mm (v prototype preglejka, finálne plech) | nenájdené |
| **Filament PETG a PLA** | 3D tlač: držiaky, lišty, krabička, stĺpiky pre snímače, držiaky mikrofónov a krabička na stĺpe | napr. [Prusament PETG 1,75 mm (Alza)](https://www.alza.cz/prusament-petg-1-75mm-urban-grey-1kg-d5714261.htm) |
| **Gumené tlmiče (silentbloky)** | krabička s elektronikou visí na oceľovom štíte | nenájdené, len kategória: [silentbloky (Essentra)](https://www.essentracomponents.com/sk-sk/s/silentbloky-a-dorazy) |
| **Skrutky, matice, závitové tyče, podložky, pánty** | uchytenie, osi doštičiek | nenájdené (železiarstvo) |
| **Vodotesná krabica** pre elektroniku | v dokončenom prototype | nenájdené |

---

## 7. Náradie (bez odkazov)

Spájkovačka s cínom, multimeter, kliešte a štípačky, vŕtačka, píla alebo poplatok za rezanie plechu, 3D tlačiareň (ak ju má škola alebo Sára). Čo škola už má, treba zistiť.

---

## Čo ostáva rozhodnúť

1. Verzia ESP32 (A alebo B).
2. Snímač zvuku: INMP441 na stĺpe je navrhnutý. Potvrdiť s Ing. Hollým (umiestnenie, pripojenie), overiť testom vo Fáze 1 a rozhodnúť, kto vyrobí stĺp.
3. Pohon plátu: reťaz (prototyp) alebo remeň GT2 s krokovým motorom.
4. Typ motora, reťaze a kolies.
5. Predradný odpor LED optických snímačov (podľa datasheetu).
6. Stabilita rámu bez spodných priečok (overiť pri skladaní).
7. Powerbanka pre stĺpovú jednotku (máme ju? nevypína sa pri malom odbere?).
8. Dĺžka stĺpa (asi 1,3 m), podstava stĺpa a dĺžka kábla k mikrofónom (asi 0,4 m, overiť testom).
