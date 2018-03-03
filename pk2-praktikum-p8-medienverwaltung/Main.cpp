#include "Medium.h"
#include "Bild.h"
#include "Audio.h"

int main()
{
    Medium *medien[2];
    medien[0] = new Audio("The C Song", 1982, "Wiesmann", 121);
    medien[1] = new Bild("Haus", 2001, "Haltern");

    medien[0]->druckeDaten();
    medien[1]->druckeDaten();
}