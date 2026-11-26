# Súčiastky a komponenty: návrh nákupného prehľadu (prototyp)

Stav z 26. 11. 2026. Je to **návrh na diskusiu**, nie objednávka. Zakúpené sú zatiaľ len optické vidlicové snímače LTH-301-05 (15 ks, TME). Zvyšok ešte nie je kúpený. Súbor platí pre **prototyp** (pôvodne bol v priečinku predajnej verzie; neaktuálne alebo vyradené položky sú z neho odstránené).

## Ako to čítať

- Počty kusov sú z dokumentu Komponenty (prototyp, vrátane rezervy).
- **Ceny tu zámerne nie sú.** Pri nákupe ich treba pozrieť priamo v obchode (orientačné ceny sú v Google tabuľke 05_KOMPONENTY_A_ROZPOCET, označené ako nepotvrdené).
- **ZAKÚPENÉ** označuje položky, ktoré už máme.
- Odkazy som našiel vyhľadávaním alebo ich určil Matej (26. 11. 2026). Pred objednávkou treba skontrolovať, či je tovar skladom a či súčiastka sedí s popisom (označené „overiť“).
- „nenájdené“ znamená, že konkrétny odkaz som nenašiel. Tam je len typ súčiastky alebo kategória.
- Obchody: [Techfun](https://techfun.sk) a [rlx.sk](https://rlx.sk) (SK), [LaskaKit](https://www.laskakit.cz/en/), [GM electronic](https://www.gme.cz) a [Hadex](https://www.hadex.cz) (CZ).
- Architektúra od 26. 11. 2026: na konštrukcii je jedno ESP32 (oba rady a motor krycieho plátu), druhé ESP32 je **základňa** 2 m od strelca (8 m od konštrukcie) so snímačmi zvuku a počasia. Mobil sa pripája len k základni. Typ spojení medzi doskami a s mobilom je nepotvrdený.

---

## 1. Riadiaca jednotka (ESP32) a anténa

Rozhodnuté 26. 11. 2026: použije sa verzia **WROOM-32U s externou anténou**, spolu **2 kusy** (terčová jednotka a základňa).

| Súčiastka | Ks | Čo robí a na čo bude | Kde kúpiť |
|---|---|---|---|
| **ESP32-WROOM-32U** vývojová doska so socketom pre externú anténu | 2 | Jedna doska na konštrukcii (oba rady terčov, servá, motor krycieho plátu), druhá je základňa pri strelcovi (snímače zvuku a počasia, príjem údajov z konštrukcie, spojenie s mobilom). Bez pripojenej antény ju nepoužívať. | [ESP32-WROOM-32U (Techfun)](https://techfun.sk/produkt/esp32-wroom-32u-vyvojova-doska-so-socketom-pre-antenu/) |
| **Anténa 2,4 GHz + pigtail** pre Wi-Fi alebo Bluetooth | počet nepotvrdený (aspoň 1 na každé ESP32) | Externá anténa pripojená cez pigtail. 26. 11. 2026 bola na Techfune vypredaná, treba overiť dostupnosť. Dosah ESP32 na 8 m a to, či anténa neporušuje pravidlá alebo či sa pri jej frekvencii niečo nehlási či neplatí, sa zistí vo Fáze 1 (nepotvrdené). | [Anténa 2,4 GHz + pigtail (Techfun)](https://techfun.sk/produkt/antena-2-4ghz-pigtail-pre-wifi-alebo-bluetooth/) |

---

## 2. Snímanie

| Súčiastka | Ks | Čo robí a na čo bude | Kde kúpiť |
|---|---|---|---|
| Optický vidlicový snímač **LTH-301-05** (Lite-On; zásah) – **ZAKÚPENÉ** | 10 (z 15 zakúpených kusov) | Vidlica s IR LED a fototranzistorom (4 drôtové vývody), štrbina 6 mm, otvor lúča 0,9 mm. Stojí v mieste, kam dopadne hlavička doštičky. Hlavička v štrbine preruší lúč a to je zásah. Poradie vývodov a rozmery puzdra overiť v datasheete výrobcu (zatiaľ nepotvrdené). | [LTH-301-05 (TME)](https://www.tme.eu/sk/details/lth-301-05/fotoelektricke-snimace-pre-plosne-spoje/liteon/), už kúpené |
| Optický vidlicový snímač **LTH-301-05** (koncové polohy plátu) – **ZAKÚPENÉ** | 2 (z 15 zakúpených kusov) | Rovnaký typ. Označuje hornú a dolnú polohu krycieho plátu, keď výčnelok plátu preruší lúč, motor sa zastaví. | rovnaký odkaz ako vyššie |
| Optický vidlicový snímač **LTH-301-05** (rezerva) – **ZAKÚPENÉ** | 3 (z 15 zakúpených kusov) | Rezerva na poškodenie pri skúšaní. Spolu 10 + 2 + 3 = 15 ks. | rovnaký odkaz ako vyššie |
| **Snímač zvuku Keyes KY-037** (modul mikrofónu s analógovým výstupom) | 6 (2 v prevádzke + 4 náhradné) | Modul s mikrofónom a komparátorom LM393 (analógový aj digitálny výstup). Dva kusy sú na základni (ľah a stoj; výšky 300 mm a 1100 mm podľa doterajšieho návrhu). Zachytia výstrel, prvý výstrel spustí časovač a piaty ho zastaví. **Nepotvrdené:** zapojenie a umiestnenie, a napätie analógového výstupu (obchod uvádza napájanie 5 V, ESP32 znesie na vstupe len 3,3 V, overiť pred zapojením). Overiť aj to, či je v balení konektor s pinmi. Či modul zvládne hlasitosť výstrelu zo vzduchovky a či 5 výstrelov = presne 5 detekcií, sa musí overiť testom vo Fáze 1. | [Keyes KY-037 (LaskaKit)](https://www.laskakit.cz/keyes-ky-037-modul-mikrofonu-s-analogovym-vystupem/) |

---

## 2a. Snímače počasia (na základni)

Typy ešte nie sú vybrané (rozhodne sa neskôr, vlastník rozhodnutia je nepotvrdený). Do rozpočtu sa zatiaľ nepočítajú.

| Súčiastka | Ks | Čo robí | Kde kúpiť |
|---|---|---|---|
| **Anemometer** (rýchlosť vetra) | 1 | Meria rýchlosť vetra. Typ sa ešte rozhodne. | zatiaľ nevybrané |
| **Snímač smeru vetra** | 1 | Meria smer vetra. Typ sa ešte rozhodne. | zatiaľ nevybrané |
| **Snímač teploty, vlhkosti a tlaku** | 1 | Jeden snímač meria všetky tri veličiny. Typ sa ešte rozhodne. | zatiaľ nevybrané |

---

## 3. Pohyb

| Súčiastka | Ks | Čo robí a na čo bude | Kde kúpiť |
|---|---|---|---|
| **Servo MG996R** | 3 (2 + rezerva) | Natočí sa na presný uhol. Jedno servo na rad otáča zdvíhaciu lištu, ktorá postaví spadnuté doštičky. Má kovové prevody. | [Techfun](https://techfun.sk/produkt/servo-motorcek-mg996r/), [rlx.sk](https://rlx.sk/en/servo-motor/7278-mg996r-servo-motor-metal-gear-high-torque-ws-15299.html) |
| **Motorček s prevodovkou** 6–12 V | 1 | Poháňa reťaz krycieho plátu. Prevodovka znižuje otáčky a zvyšuje silu. Presný typ nie je vybraný, napájanie je 6,0–8,4 V z batérie, takže treba verziu na toto napätie (overiť). Príklad: JGA25-370. | [Motor JGA25-370 12 V s prevodovkou (LaskaKit)](https://www.laskakit.cz/en/motor-jga25-370-12v-s-prevodovkou-/), ďalšie motory: [Hadex](https://www.hadex.cz/c/motorky-s-prevodovkou-1), [LaskaKit](https://www.laskakit.cz/en/motors/) |
| **Driver motora TB6612FNG** | 2 (1 + rezerva) | ESP32 nevie poháňať motor priamo. Driver spína väčší prúd a dovolí točiť motorom oboma smermi. Zvláda do 13,5 V. Vstupy STBY a PWMA sú natrvalo na 3,3 V, takže z ESP32 idú len 2 riadiace vodiče. | [Techfun](https://techfun.sk/produkt/motor-driver-tb6612fng/), [rlx.sk](https://rlx.sk/en/motor-driver/3017-tb6612fng-dual-motor-driver-carrier-pololu-713.html) |
| **Reťaz a reťazové kolesá** | asi 20 článkov, 2 kolesá (typ overiť) | Reťaz vedľa pravej prednej nohy zdvíha a spúšťa krycí plát. Typ a rozstup sa vyberie podľa motora. | nenájdené, len kategória: [valčekové reťaze (RS Components)](https://cz.rs-online.com/web/c/prenos-mechanickeho-vykonu/valeckove-retezy-a-prislusenstvi/valeckove-retezy/) |
| **Ozubený remeň GT2 + krokový motor** (alternatíva k reťazi, rozhodnutie vo Fáze 2) | podľa návrhu | Presnejšie než reťaz, ale drahšie a zložitejšie. | nenájdené |
| **Vodiace lišty** pre krycí plát | 2 | Plát sa v nich posúva zvisle. Typ nie je vybraný (možno hliníkový U-profil alebo 3D tlač). | nenájdené |

---

## 4. Napájanie

| Súčiastka | Ks | Čo robí a na čo bude | Kde kúpiť |
|---|---|---|---|
| **Li-ion článok 18650** | 2 (v sérii) | Batéria terčovej jednotky (2S, 7,4 V). Kupovať len od overeného predajcu s uvedenou kapacitou. | nenájdené |
| **Držiak na 2 články 18650** | 1 | Drží oba články a vyvádza vodiče. | [Techfun](https://techfun.sk/produkt/drziak-pre-dve-18650-li-ion-baterie/), [LaskaKit](https://www.laskakit.cz/en/bateriovy-box-2x18650-dratove-vyvody/) |
| **Nabíjací modul 2S s USB-C** (napr. IP2326) | 2 (1 + rezerva) | Nabije dva články v sérii z bežnej USB-C nabíjačky od mobilu (5 V, modul si napätie zvýši na 8,4 V). Nabíja sa pri vypnutom terči. | [LaskaKit PD-IP2326 2–3S 1,5 A](https://www.laskakit.cz/en/la123029/) |
| **BMS 2S s vyrovnávaním** | 2 (1 + rezerva) | Chráni články pred prebitím, hlbokým vybitím a skratom a vyrovnáva napätie. | [LaskaKit: ochrana a balancér 2S 20 A](https://www.laskakit.cz/en/ochrana-li-ion-baterie-2s-20a/) |
| **Menič step-down A (6 V, ≥ 3 A)** | 2 | Napája servá. Musí zvládnuť aspoň 3 A. | [XL4015 5 A (LaskaKit)](https://www.laskakit.cz/en/step-down-menic-s-xl4015/), [XL4015 (GM electronic)](https://www.gme.cz/v/1507885/modul-dc-dc-menic-step-down-125-30v-5a-xl4015), [XL4015 (Hadex)](https://www.hadex.cz/p/m408-napajeci-modul-step-down-menic-5a-s-xl4015) |
| **Menič step-down B (5 V)** | 2 | Napája ESP32 a optické snímače. | [LM2596 (LaskaKit)](https://www.laskakit.cz/en/step-down-menic-s-lm2596/) alebo rovnaký XL4015 ako vyššie |
| **Poistka 5 A + držiak** | 1 + sada | Pri skrate preruší obvod. | [Sada sklenených poistiek 5×20 mm (Techfun)](https://techfun.sk/produkt/sada-100-kusov-najpouzivanejsich-poistiek-5x20/), [LaskaKit](https://www.laskakit.cz/en/sada-sklenenych-trubickovych-pojistek-5x20mm-100ks/). Držiak: nenájdené (v Hadexe a GM electronic je viac typov) |
| **Vypínač** | 1 | Zapína a vypína terč. | nenájdené |
| **Napájanie základne** (zatiaľ nerozhodnuté) | 1 | Pôvodný návrh: powerbanka s USB a USB kábel k ESP32 základne. **Nepotvrdené, či ju máme a či je to správne riešenie.** Powerbanka sa nesmie sama vypínať pri malom odbere prúdu (overiť testom). | nenájdené |

---

## 5. Zapájanie a drobnosti

| Súčiastka | Ks | Čo robí a na čo bude | Kde kúpiť |
|---|---|---|---|
| **Nepájivé pole 830 bodov** | 1 | Rýchle zapojenie bez spájkovania na skúšanie vo Fáze 1. | [Techfun](https://techfun.sk/produkt/nepajive-kontaktne-pole-830-bodov-transparentne/), [LaskaKit](https://www.laskakit.cz/en/nepajive-kontaktni-pole-830-pinu--bile/) |
| **Prepojovacie káble Dupont M-M** (samec-samec, 40 žíl, 20 cm) | 1 sada | Prepájanie na nepájivom poli. | [Dupont M-M 40 ks 20 cm (LaskaKit)](https://www.laskakit.cz/en/dupont-propojovaci-kabely-m-m-40ks-samec-samec--20cm-/) |
| **Prepojovacie káble Dupont M-F** (samec-samica, 40 žíl, 20 cm) | 1 sada | Pripojenie modulov (napr. KY-037) k pinom dosky. | [Dupont M-F 40 ks 20 cm (LaskaKit)](https://www.laskakit.cz/dupont-propojovaci-kabely-m-f-40ks-samec-samice--20cm-/) |
| **Dierkovaná doska** | podľa návrhu | Trvalé zapojenie prototypu od Fázy 2, lebo nepájivé pole sa pri otrasoch uvoľňuje. Okrem hlavnej dosky v krabičke aj 2 malé doštičky radov (5 odporov 220 Ω a konektor JST pre každý rad), pri samotných snímačoch žiadna doštička. | nenájdené |
| **Konektory JST (XH)** | sada | Rýchle a pevné odpojenie senzorov, serv a batérie. Jeden kábel na rad snímačov (7 vodičov). | [LaskaKit sada JST-XH 80 ks](https://www.laskakit.cz/en/laskakit-sada-jst-xh-konektoru-80ks/), [Hadex konektory](https://www.hadex.cz/c/kabelova-konfekce) |
| **Sada 1000 rezistorov** (34 hodnôt 1 Ω – 10 MΩ, 20 až 50 ks na hodnotu, 0,25 W, 5 %) | 1 sada | Predradné odpory LED snímačov LTH-301-05 (začiatočná hodnota ≈ 220 Ω, overiť na stole podľa datasheetu; aspoň 12 ks + rezerva: 10 ks na dvoch doštičkách radov pri konektoroch JST, 2 ks v krabičke pre koncové snímače) a delič na meranie batérie (napr. 100 kΩ a 33 kΩ). Pull-up odpory pre snímače netreba, stačí vnútorný pull-up ESP32. | [LaskaKit sada 1000 rezistorov](https://www.laskakit.cz/en/laskkit-sada-1000-rezistoru--34-hodnoty-1r-10m--20-az-50-kusu-na-jednu-hodnotu--0-25w-5-/) |
| **Kondenzátory** (100 nF, 100 µF, 1000 µF) | sada | 1000 µF pri servách (aby ESP32 nevypadávalo), 100 µF pri vstupe VM drivera, 100 nF na svorkách motora. | rovnaký kit, elektrolyt väčší: nenájdené |
| **LED** | pár ks | Skúšobný výstup a signalizácia na terči. | v kite vyššie |
| **Kábel USB a kábel do servo/motora, silnejšie vodiče** | podľa návrhu | Programovanie a napájanie. | nenájdené |

---

## 6. Mechanika a materiál

| Materiál | Na čo bude | Kde kúpiť |
|---|---|---|
| **Hliníkové profily 25 × 25 × 2 mm** (s drážkou aj bez drážky) | rám prototypu (4 nohy a horné priečky) | **Presný typ profilov a spojok zatiaľ nie je určený.** Sára dodá súpis (tabuľku) profilov a spojok do 27. 11. 2026. Pôvodný návrh (HJ25TK2 25 × 25 × 1,5 mm, spojky 253/KJ) už neplatí. Dĺžky a počet spojok sa prepočítajú podľa nákresu prototypu (nepotvrdené). |
| **Stojan pre základňu** | uchytenie ESP32 základne a snímačov zvuku (2 m od strelca) | Tvar, materiál a výška nie sú rozhodnuté (nepotvrdené). |
| **Oceľový plech 2–3 mm** | panely s otvormi, sklápacie doštičky, štít pre elektroniku | nenájdené (objednať narezaný presne na mieru, firmu treba vybrať) |
| **Plech alebo hliník pre krycí plát** | krycí plát 456 × 140 mm (materiál sa upresní podľa ponuky na mieru, nepotvrdené; drevo sa nepoužije) | nenájdené |
| **Filament PETG a PLA** | 3D tlač: držiaky, lišty, krabička, držiaky snímačov zvuku a krabička základne (nepotvrdené) | napr. [Prusament PETG 1,75 mm (Alza)](https://www.alza.cz/prusament-petg-1-75mm-urban-grey-1kg-d5714261.htm) |
| **Gumené tlmiče (silentbloky)** | krabička s elektronikou visí na oceľovom štíte | nenájdené, len kategória: [silentbloky (Essentra)](https://www.essentracomponents.com/sk-sk/s/silentbloky-a-dorazy) |
| **Skrutky, matice, závitové tyče, podložky, pánty** | uchytenie, osi doštičiek | nenájdené (železiarstvo) |
| **Vodotesná krabica** pre elektroniku | v dokončenom prototype | nenájdené |

---

## 7. Náradie (bez odkazov)

Spájkovačka s cínom, multimeter, kliešte a štípačky, vŕtačka, píla alebo poplatok za rezanie plechu, 3D tlačiareň (ak ju má škola alebo Sára). Čo škola už má, treba zistiť.

---

## Čo ostáva rozhodnúť

1. Typ spojení: ESP32 na konštrukcii ↔ základňa a základňa ↔ mobil (zatiaľ Bluetooth LE ako doterajší návrh, nepotvrdené) a smer príkazov mobil → základňa → terč.
2. Dosah ESP32 s externou anténou na 8 m, dostupnosť antény (vypredaná 26. 11. 2026), počet antén a pravidlá pre jej použitie (zistí Matej vo Fáze 1).
3. KY-037: napätie analógového výstupu (5 V proti 3,3 V na ESP32), zapojenie a umiestnenie snímačov zvuku.
4. Typy snímačov počasia (anemometer, smer vetra, teplota + vlhkosť + tlak) a kto ich vyberie.
5. Napájanie a stojan základne.
6. Pohon plátu: reťaz (prototyp) alebo remeň GT2 s krokovým motorom; typ motora, reťaze a kolies.
7. Predradný odpor LED snímačov LTH-301-05 (začiatočná hodnota ≈ 220 Ω, overiť na stole podľa datasheetu) a poradie vývodov snímača (overiť v datasheete).
8. Typ profilov a spojok (súpis od Sáry do 27. 11. 2026) a stabilita rámu bez spodných priečok (overiť pri skladaní).
