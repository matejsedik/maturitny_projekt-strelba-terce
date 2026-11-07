**Automatizované biatlonové terče - maturitný projekt 2027/28**
**Autori**: **Sára Kolčiterová** a **Matej Šedík** v spolupráci s **Ing. Rastislavom Hollým**

**Popis:**
Pojekt je zameraný na vytvorenie automatizovaných biatlonových terčov, predovšetkým na tréningy mládeže a dorastu.
Pravidlá a technické špecifiká sú v priečinku **07_Prilohy_a_odkazy** (daľej len "prílohy").

**O čo v tomto projekte pôjde:**
Projekt bude rozdelený na dve hlavné časti - technickú časť (automatizácia terčov, zapájanie senzorov, atď) a softwérovú časť (mobilná aplikácia)

**Technická časť:**
Aktuálne biatlonové terče na tréning streľby zo vzduchovej zbraňe sú väčšinou robené spôsobom, že keď na ne žiak dostrieľa, niekto k ním musí prísť a manuálne ich naspäť postaviť, aby sa na ne dalo strieľať znovu. Je to jednaj nepraktické, pretože zakaždým sa stratí nejaký čas, kým k tomu terču niekto príde a postaví ho, a jednak je to aj nebezpečné, pretože zakiaľ niekto pôjde postaviť terč, môže sa stať, že na dotyčného niekto, hoci aj neúmyseľne a z nedbanlivosti, vystrelí. Tieto problémy rieši bude riešiť náš projekt. V technickej časti projektu na dostupné biatlonové terče pridéme automatizovaný mechanizmus, ktorý po dostrieľaní terče znovu postaví a zároveň zaznamená, ktoré terče boli úspešne zasiahnuté a ktoré nie. Plán je urobiť takéto automatizované terčové zariadenia dve, ktoré budú upevnené na jednej konštrukcii. Jeden rad terčov určený na streľbu z ľahu a druhý na streľbu zo stoja (viď. prílohy). Takisto na konštrukciu umiestnime aj automatizovaný pohyblivý plát, s ktorým sa bude dať prekryť či už horný alebo spodný rad terčov, v závislosti od toho, na ktoré sa bude v danom momente strieľať. Ďalej technická časť bude zahŕňať aj senzory zvuku, pre snímanie začiatku a skončenia streľba.

**Softvérová časť:**
Na to aby sa mohli terče automaticky znovu postaviť, aby sa mohol po konštrukcii hýbať kricí plát a aby sa dala zaznamenávať úspešnosť streľby na terče, potrebujeme na to nejakú aplikáciu. My sme si pre tento projekt zvolili vytvorenie mobilnej aplikácie. Cez aplikáciu sa budú dať terče automaticky postaviť a bude sa dať ovládať pohyblivý plát na prekrývanie terčov. Aplikácia bude takisto zaznamenávať udáje zo senzorov na terčoch (úspešné trafenie alebo netrafenie terčov) a údaje zo zvukového senzoru. Tieto údaje bude následne vyhodnocovať a ukladať do databázy, aby si mohol tréner pozerať výsledky žiakov za širšie časové obdobie. Aplikácia bude tieto údaje spracovávať vo forme grafov, porovnaní a bude vyhodnocovať, či sa daný žiak zlepšuje, zhoršuje alebo jeho výsledky stagnujú. Tréner si bude môcť vytvoriť profily pre všetkých svojích žiakov, aby mal všetky potrebné údaje na jednom mieste. Aplikácia bude dostupná aj offline. Takito sa zvažuje aj ukladanie údajov na claude. Možno aplikáciu rozdelíme na verzie free a pro, s tým že vo verzii free by bolo dostupné všetko, čo je tu vymenované a do verzie pro by sa mohli vymyslieť nejaké vylepšenia, prípadne rozšírenia. Zatiaľ ale pracujeme len na vytvorení aplikácie, delenie na verie a paywall budeme preberať až vo finálnech štádiách.

**Problémy a komplikácie, ktoré môžu nastať:**
Prvý problém môže nastať pri senzoroch snímania trafenia terča a takisto pri zariadeniach na zdvíhanie teročv. Keďže budú na všetky na tej istej konštrukcíí ako terče, do ktorých sa strieľa, môže sa stať, že otrasy z nárazov po zásahu nábojom, môžu spôsobiť nejaké poškodenie senzora alebo motorčeka.

Druhý problém sa týka dosahu pripojenia, respektíve komunikácie aplikácie a senzorv. Pri streľbe zo stoja je žiak od terčov 50m (viď. prílohy). To logicky znamená že tréner s aplikáciou bude stáť za žiakom (kvôli bezpečnosti), takže bude minimálne 50m od senzorov. To znamená, že signál zo senzorov možno nedosiahne až k mobilu, na ktorom je spustená aplikácia. Tento problém by sa dal vyriešiť posielaním informácii po sieti, lenže my chceme urobiť aplikáciu dostupnú aj offline, takže táto možnosť nie je zvažovaná.
