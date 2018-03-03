#include "Audio.h"
#include <iostream>

Audio::Audio(std::string titel, int jahr, std::string newInterpret, int newDauer) : Medium(titel, jahr), interpret{newInterpret}, dauer{newDauer}
{
}

void Audio::druckeDaten()
{
    std::cout << "ID = " << getId() << " \"" << getTitel() << "\" von " << interpret << " aus " << getJahr() << " Spieldauer: " << dauer << " sek." << std::endl;
}