#include "Game.h"
#include "Arvauspeli2.cpp"
#include <iostream>

int main() {
    std::cout << "[DEBUG] main(): P��ohjelma alkaa.\n";

    // Luodaan Game-olio, jonka suurin etsitt�v� luku on 50
    Game peli(50);
    std::cout << "[DEBUG] main(): Game-olio luotu.\n";

    // K�ynnistet��n peli
    peli.play();

    // Tulostetaan pelin tulokset
    peli.printGameResult();

    std::cout << "[DEBUG] main(): P��ohjelma p��ttyy.\n";
    return 0;
}