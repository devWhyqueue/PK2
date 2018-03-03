#include "Medium.h"

Medium::Medium(std::string newTitel, int newJahr) : titel{newTitel}, jahr{newJahr}
{
    static int idInc;
    id = idInc;
    idInc++;
}

int Medium::alter()
{
    return 2017 - jahr;
}