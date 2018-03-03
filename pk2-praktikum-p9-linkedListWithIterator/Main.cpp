#include "LinkedList.h"
#include <iostream>

using namespace fhdo_pk2;

void work(const char *t)
{
    std::cout << "[" << t << "],"
              << " ";
}

void ausgabe(const char *text)
{
    std::cout << text << std::endl;
}

int main()
{
    LinkedList l;

    //append() - Test
    std::cout << "Append-Test" << std::endl
              << "-----------------" << std::endl;
    std::cout << "Append \"Hallo\": " << l.append("Hallo") << " (expected: 1)" << std::endl;
    std::cout << "Append \"Welt\": " << l.append("Welt") << " (expected: 1)" << std::endl;
    std::cout << "Append \"!\": " << l.append("!") << " (expected: 1)" << std::endl;
    std::cout << "VisitAll: ";
    l.visit_all(work);
    std::cout << "(expected: \"[Hallo], [Welt], [!],\")"
              << "\n"
              << std::endl;

    //insert() - Test
    std::cout << "Insert-Test" << std::endl
              << "-----------------" << std::endl;
    std::cout << "Insert an pos 0: " << l.insert("pos 0", 0) << " (expected: 1)" << std::endl; // ANFANG IST FALSCH, ELEMENTE MÜSSEN NACH RECHTS
    std::cout << "Insert an pos 1: " << l.insert("pos 1", 1) << " (expected: 1)" << std::endl;
    std::cout << "Insert an pos 2: " << l.insert("pos 2", 2) << " (expected: 1)" << std::endl;
    std::cout << "Insert an pos 10: " << l.insert("pos last", 10) << " (expected: 1)" << std::endl;
    std::cout << "VisitAll: ";
    l.visit_all(work);
    std::cout << "(expected: \"[pos 0], [pos 1], [pos 2], [Hallo], [Welt], [!], [pos last],\")"
              << "\n"
              << std::endl;

    //remove() - Test
    std::cout << "Remove-Test" << std::endl
              << "-----------------" << std::endl;
    std::cout << "Remove an pos 0: " << l.remove(0) << " (expected: 1)" << std::endl;
    std::cout << "Remove an pos 3: " << l.remove(3) << " (expected: 1)" << std::endl;
    std::cout << "Remove an pos 10: " << l.remove(10) << " (expected: 1)" << std::endl;
    std::cout << "VisitAll: ";
    l.visit_all(work);
    std::cout << "(expected: \"[pos 1], [pos 2], [Hallo], [!],\")"
              << "\n"
              << std::endl;
    std::cout << "Remove an pos 0: " << l.remove(0) << " (expected: 1)" << std::endl;
    std::cout << "Remove an pos 0: " << l.remove(0) << " (expected: 1)" << std::endl;
    std::cout << "Remove an pos 0: " << l.remove(0) << " (expected: 1)" << std::endl;
    std::cout << "Remove an pos 0: " << l.remove(0) << " (expected: 1)" << std::endl;
    std::cout << "Remove an pos 0: " << l.remove(10) << " (expected: 0)"
              << "\n"
              << std::endl;

    //sonstige Tests
    std::cout << "sonstige Tests" << std::endl
              << "-----------------" << std::endl;
    std::cout << "First: " << (void *)(l.first()) << " (expected: 0)" << std::endl;
    std::cout << "Last: " << (void *)(l.last()) << " (expected: 0)" << std::endl;
    l.append("Eins");
    l.append("Zwei");
    l.append("Drei");
    std::cout << "First (2): " << (l.first()) << " (expected: \"Eins\")" << std::endl;
    std::cout << "Last (2): " << (l.last()) << " (expected:  \"Drei\")" << std::endl;
    std::cout << "Get pos 0: " << l.get(0) << " (expected: \"Eins\")" << std::endl;
    std::cout << "Get pos 1: " << l.get(1) << " (expected: \"Zwei\")" << std::endl;
    std::cout << "Get pos 2: " << l.get(2) << " (expected: \"Drei\")" << std::endl;
    std::cout << "Index of \"Eins\": " << l.index_of("Eins") << " (expected: 0)" << std::endl;
    std::cout << "Index of \"Zwei\": " << l.index_of("Zwei") << " (expected: 1)" << std::endl;
    std::cout << "Index of \"Drei\": " << l.index_of("Drei") << " (expected: 2)"
              << "\n"
              << std::endl;

    //Praktikum 9 - Test
    std::cout << "Praktikum 9 - Test" << std::endl
              << "-----------------" << std::endl;
    using namespace std;
    LinkedList liste;
    liste.append("Element 1");
    liste.insert("Element 2", 2);
    LinkedList liste2 = liste;
    cout << "Liste:" << endl;
    liste.visit_all(ausgabe);
    liste.remove(2);
    cout << "Liste:" << endl;
    liste.visit_all(ausgabe);
    cout << "Liste2:" << endl;
    liste2.visit_all(ausgabe);

    return 0;
}
