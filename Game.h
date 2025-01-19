#ifndef GAME_H
#define GAME_H

class Game 
{
private:
    int maxNumber;     // Suurin etsitt‰v‰ luku
    int playerGuess;   // Pelaajan arvaus
    int randomNumber;  // Arvottu luku
    int numOfGuesses;  // Arvausten m‰‰r‰

public:
    Game(int maxNumber);       // Konstruktori
    ~Game();                   // Purkaja
    void play();               // Pelin logiikka
    void printGameResult();    // Tulostaa pelin lopputuloksen
}