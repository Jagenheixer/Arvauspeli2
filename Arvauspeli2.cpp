#include "Game.h"
#include <iostream>
#include <cstdlib> // rand() ja srand()
#include <ctime>   // time()

// Konstruktori, alustetaan satunnaisluku
Game::Game(int maxNumber) : maxNumber(maxNumber), numOfGuesses(0), playerGuess(0) {
    srand(static_cast<unsigned int>(time(0)));   // Alustetaan satunnaislukugeneraattori
    randomNumber = rand() % maxNumber + 1;      // Arvotaan luku väliltä 1–maxNumber
    std::cout << "[DEBUG] Konstruktori: Arvottu luku on " << randomNumber << "\n";
}

// Purkaja (ei erityistä tehtävää tässä)
Game::~Game() 
{
    std::cout << "[DEBUG] Purkaja: Game-olio tuhotaan.\n";
}

// Pelin logiikka
void Game::play() {
    std::cout << "[DEBUG] play(): Peli alkaa.\n";
    std::cout << "Tervetuloa arvauspeliin! Arvaa luku väliltä 1–70" << maxNumber << ".\n";

    while (true) {
        std::cout << "Anna arvaus: ";
        std::cin >> playerGuess;
        numOfGuesses++; // Kasvatetaan arvausten määrää

        std::cout << "[DEBUG] play(): Pelaaja arvasi " << playerGuess << "\n";

        if (playerGuess < randomNumber) {
            std::cout << "Luku on suurempi. Yritä uudelleen.\n";
        }
        else if (playerGuess > randomNumber) {
            std::cout << "Luku on pienempi. Yritä uudelleen.\n";
        }
        else {
            std::cout << "Oikea vastaus!\n";
            break; // Lopetetaan, kun arvaus on oikein
        }
    }
}

// Tulostaa pelin lopputuloksen
void Game::printGameResult() {
    std::cout << "[DEBUG] printGameResult(): Pelin tulokset tulostetaan.\n";
    std::cout << "Peli päättyi! Arvottu luku oli: " << randomNumber << "\n";
    std::cout << "Tarvitsit " << numOfGuesses << " arvausta.\n";
}