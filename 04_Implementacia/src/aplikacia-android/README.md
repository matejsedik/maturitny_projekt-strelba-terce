# aplikacia-android

Mobilná aplikácia pre Android (Kotlin, Jetpack Compose, Room). Od 26. 11. 2026 sa spája len so základňou (druhé ESP32 2 m od strelca), ktorá posiela údaje zo snímačov zvuku (začiatok a koniec streľby, čas výstrelu), údaje z terčovej jednotky a údaje o počasí (vietor, teplota, vlhkosť, tlak; ako funkcia aplikácie). Typ spojenia mobil – základňa je zatiaľ Bluetooth LE ako doterajší návrh, nepotvrdené; smer príkazov z mobilu k terču cez základňu je tiež nepotvrdený. Pôvodne sa mobil spájal priamo s terčom a druhým spojením so stĺpovou jednotkou (návrh Ing. Hollého). Popis obrazoviek, databázy a štatistík je v dokumente 03_APLIKACIA.

**Stav:** priečinok je prázdny. Projekt sa vytvorí v Android Studio (Fáza 0 – inštalácia nástrojov, Fáza 1 – prvé kroky a prvá aplikácia s Bluetooth a LED). Android Studio treba pri vytvorení projektu nasmerovať práve do tohto priečinka.
