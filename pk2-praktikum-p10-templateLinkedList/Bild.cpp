#include "Bild.h"
#include <iostream>

Bild::Bild(std::string titel, int jahr, std::string newOrt) : Medium(titel, jahr), ort{newOrt}
{
}

void Bild::druckeDaten()
{
    std::cout << "ID = " << getId() << " \"" << getTitel() << "\" aufgenommen im Jahr " << getJahr() << " in " << ort << std::endl;
}