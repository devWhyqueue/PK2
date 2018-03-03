#include "LinkedList.h"
#include "Medium.h"
#include "Bild.h"
#include "Audio.h"
#include <iostream>

LinkedList<Medium*> l;

void work(Medium *m)
{
    m->druckeDaten();
}

void visitAndRemove(Medium *m)
{
   std::cout << l.remove(0) << std::endl;
}

int main()
{
    Medium *medien[2];
    medien[0] = new Audio("The C Song", 1982, "Wiesmann", 121);
    medien[1] = new Bild("Haus", 2001, "Haltern");

    //append() - Test
    std::cout << "Append-Test" << std::endl
              << "-----------------" << std::endl;
    std::cout << "Append Audio: " << l.append(medien[0]) << " (expected: 1)" << std::endl;
    std::cout << "Append Bild: " << l.append(medien[1]) << " (expected: 1)" << std::endl;
    std::cout << "VisitAll:\n";
    l.visit_all(work);
    std::cout << std::endl;

    //remove() - Test
    std::cout << "Remove-Test" << std::endl
              << "-----------------" << std::endl;
   l.visit_all(visitAndRemove);
   std::cout << std::endl;

    //sonstige Tests
    std::cout << "sonstige Tests" << std::endl
              << "-----------------" << std::endl;
    l.append(medien[1]);
    l.append(medien[0]);
    std::cout << "VisitAll:\n";
    l.visit_all(work);

    return 0;
}
