# Prototyp: konštrukcia a rozmery (zatiaľ známe informácie)

Prototyp je **súťažná verzia** projektu (AMAVET 2027, prihláška do konca septembra 2027). Predajná verzia (možný budúci startup) sa teraz nerieši, jej starší návrh je v priečinku `../navrhy_zapojenia_a_konstrukcie-predajna_verzia/`.

**Stav:** tento súbor zbiera len to, čo je zatiaľ dohodnuté alebo zistené po konzultácii s Ing. Hollým (22. 11. 2026). **Nákres ani výkres prototypu zatiaľ neexistuje** (vypracuje sa neskôr podľa konkrétnejších podkladov; úloha „Nakresliť technický výkres celej konštrukcie“ je vo Fáze 0 v harmonograme). Preto tu nie je uvedená žiadna cesta k nákresu.

## Rozmery celého prototypu

| Rozmer | Hodnota |
| :- | :- |
| Výška | 1225 mm (pôvodne 1200 mm) |
| Hĺbka | 300 mm |
| Šírka | 450 mm |

## Terčové plechy (panely)

- Používajú sa plechy s otvormi, ktoré **už máme**: 400 × 100 mm, hrúbka 3 mm.
- Rozostup stredov otvorov asi 70 mm (pre ľah aj pre stoj).
- Otvory: Ø 15 mm pre ľah, Ø 35 mm pre stoj (rozmery otvorov sa nemenia). Obe polohy sa strieľajú z 10 m (vzduchovka).
- Výška stredov otvorov (podľa doterajšieho zadania): ľah 300 mm, stoj 1100 mm.
- Plechy nemajú správnu farbu. **Čierne kolieska sa na ne odtlačia pečiatkou** (vonkajší kruh Ø 35 mm, vnútorný kruh Ø 15 mm) a po použití sa zmyjú. Pečiatku vyrobí Sára (jedna pečiatka, úloha vo Fáze 0 do 27. 11. 2026).
- Plech na samotnú konštrukciu sa objedná narezaný presne na mieru až podľa nákresu prototypu (zatiaľ neobjednané).

## Rám

- Hliníkové profily 25 × 25 × 2 mm, s drážkou aj bez drážky.
- **Presný typ profilov a spojok zatiaľ nie je určený.** Matej ho upresní neskôr počas týždňa (po 22. 11. 2026); do tej doby sa vo všetkých dokumentoch eviduje len ako „Profily“.
- Pôvodný návrh (profil HJ25TK2 25 × 25 × 1,5 mm, spojky 253/KJ) už neplatí; jeho ceny sú v dokumentoch len ako pôvodný odhad, nepotvrdené.
- Dĺžky profilov, počet spojok a uchytenie panelov a krabice sa prepočítajú až podľa nákresu prototypu (nepotvrdené).

## Optické snímače (LTH-301-05)

- Pravidlo z konzultácie: **žiadny optický snímač nesmie nikdy smerovať štrbinou kolmo hore**, lebo by do nej mohlo niečo spadnúť a pokazilo by to detekciu.
- Platí pre všetkých 12 snímačov (10 na zásahy, 2 koncové).

## Elektronika a rozmiestnenie (zmena z 26. 11. 2026)

- Na konštrukcii je **jedno ESP32-WROOM-32U s externou anténou**. Obsluhuje oba rady terčov aj motor krycieho plátu.
- **Základňa** je druhé ESP32-WROOM-32U s externou anténou, 8 m od konštrukcie (2 m od strelca). Pripájajú sa k nej snímače zvuku a snímače počasia, prijíma údaje z ESP32 na konštrukcii a posiela ich do mobilu trénera. Mobil sa pripája len k základni.
- Snímače zvuku: 6 ks Keyes KY-037 (2 v prevádzke, 4 náhradné). Snímače počasia: anemometer, snímač smeru vetra a jeden snímač teploty, vlhkosti a tlaku (typy ešte nie sú vybrané).
- Pôvodný návrh (3 dosky ESP32, 2 mikrofóny INMP441 na stĺpe, mobil s dvoma spojeniami) už neplatí.
- Typ spojení medzi doskami a s mobilom, dosah ESP32 na 8 m, pravidlá pre anténu 2,4 GHz a stojan základne sú nepotvrdené (overí sa vo Fáze 1).

## Čo je nepotvrdené alebo chýba

- Nákres prototypu, presné dĺžky profilov, typ profilov a spojok, cena plechu na konštrukciu.
- Stabilita rámu na štyroch nohách bez spodných priečok (overí sa skúškou, riziko č. 13).
- Snímače zvuku na základni (umiestnenie a zapojenie nie sú rozhodnuté, preto tu nie sú uvedené).
- Či sa niektorý starší návrh zapojenia z priečinka predajnej verzie dá použiť aj pre prototyp.

Zdroje: poznámky z konzultácie s Ing. Hollým (22. 11. 2026), poznámky z 26. 11. 2026, Google dokumenty 01, 02, 05 a Komponenty.
