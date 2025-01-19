#include "Game.h"
#include "Arvauspeli2.cpp"
#include <iostream>

int main() {
    std::cout << "[DEBUG] main(): Pääohjelma alkaa.\n";

    // Luodaan Game-olio, jonka suurin etsittävä luku on 50
    Game peli(50);
    std::cout << "[DEBUG] main(): Game-olio luotu.\n";

    // Käynnistetään peli
    peli.play();

    // Tulostetaan pelin tulokset
    peli.printGameResult();

    std::cout << "[DEBUG] main(): Pääohjelma päättyy.\n";
    return 0;
}