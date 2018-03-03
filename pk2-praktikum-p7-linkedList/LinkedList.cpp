#include "LinkedList.h"

LinkedList::LinkedList() : head{new element}, tail{new element}
{
    head->data = nullptr;
    head->next = nullptr;
    tail->data = nullptr;
    tail->next = nullptr;
}

LinkedList::LinkedList(const LinkedList &obj) : LinkedList()
{
    element *old = obj.head;
    while (old != nullptr)
    {
        append(old->data);
        old = old->next;
    }
}

LinkedList::~LinkedList()
{
    while (remove(0))
        ;
}

int LinkedList::append(const char *text)
{
    if (head == nullptr) // Liste nicht initialisiert
    {
        head = new element;
        head->data = text;
        head->next = nullptr;
        tail = head;
        return 1;
    }
    if (head->next == nullptr && head->data == nullptr) // kein Element
    {
        head->data = text;
        return 1;
    }
    if (head->next == nullptr) // ein Element
    {
        try
        {
            head->next = new element;
            head->next->data = text;
            head->next->next = nullptr;
            tail = head->next;

            return 1;
        }
        catch (...)
        {
            return 0;
        }
        return 1;
    }

    element *e = head;
    while (e->next != nullptr)
        e = e->next;
    try
    {
        e->next = new element;
        e->next->data = text;
        e->next->next = nullptr;
        tail = e->next;

        return 1;
    }
    catch (...)
    {
        return 0;
    }
}

int LinkedList::insert(const char *text, int p)
{
    if (p < 0) // falsche Eingabe
        return 0;

    if (head == nullptr) // Liste nicht initialisiert
    {
        head = new element;
        head->data = text;
        head->next = nullptr;
        tail = head;
        return 1;
    }

    if (head->next == nullptr && head->data == nullptr) // kein Element
    {
        head->data = text;
        return 1;
    }
    if (head->next == nullptr) // ein Element
    {
        try
        {
            if (p != 0) // nach dem ersten Element einfügen
            {
                head->next = new element;
                head->next->data = text;
                head->next->next = nullptr;
                tail = head->next;
                return 1;
            }
            else // vor dem ersten Element einfügen
            {
                element *tmp = head; // alter Anfang
                head = new element;  // neuer Anfang
                head->data = text;
                head->next = tmp; // neu zeigt auf alt
            }
        }
        catch (...)
        {
            return 0;
        }
        return 1;
    }

    if (p == 0) // Einfügen am Anfang
    {
        try
        {
            element *tmp = head; // alter Anfang
            head = new element;  // neuer Anfang
            head->data = text;
            head->next = tmp; // neu zeigt auf alt
            return 1;
        }
        catch (...)
        {
            return 0;
        }
    }

    element *e = head;
    int i;
    for (i = 0; i < (p - 1); i++)
    {
        if (e->next != nullptr)
            e = e->next;
    } // endet VOR gewünschter Element-Position

    if (e->next == nullptr) // Einfügen am Ende
    {
        try
        {
            e->next = new element;
            e->next->data = text;
            e->next->next = nullptr;
            tail = e->next;

            return 1;
        }
        catch (...)
        {
            return 0;
        }
    }
    else // Einfügen in Mitte
    {
        try
        {
            element *neu = new element;
            neu->data = text;
            neu->next = e->next;
            e->next = neu;

            return 1;
        }
        catch (...)
        {
            return 0;
        }
    }
}

int LinkedList::remove(int p)
{
    if (head == nullptr || (head->next == nullptr && head->data == nullptr)) // Liste nicht initialisiert oder kein Element
        return 0;

    if (head->next == nullptr) // ein Element
    {
        delete head;
        head = nullptr;
        tail = nullptr;
        return 1;
    }

    if (p == 0) // Entfernen am Anfang
    {
        element *del = head; // zu entfernender Anfang
        head = head->next;   // zweites Element wird zu neuem Anfang
        delete del;          // alter Anfang wird entfernt
        return 1;
    }

    element *e = head;
    int i;
    for (i = 0; i < (p - 1); i++)
    {
        if (e->next->next != nullptr)
            e = e->next;
    } // endet VOR gewünschter Element-Position oder VOR letztem Element

    element *del = e->next;
    e->next = e->next->next;
    delete del;

    return 1;
}

const char *LinkedList::get(int p)
{
    element *e = head;
    int i;
    for (i = 0; i < p; i++)
    {
        if (e == nullptr)
            return nullptr;
        e = e->next;
    } // endet AN gewünschter Element-Position
    return e->data;
}

int LinkedList::index_of(const char *text)
{
    if (head == nullptr)
        return -1;

    element *e = head;
    int i = 0;
    while (e->data != text)
    {
        if (e->next == nullptr)
            return -1;
        e = e->next;
        i++;
    }
    return i;
}

const char *LinkedList::first()
{
    if (head == nullptr) // Liste nicht initialisiert
        return nullptr;

    return head->data;
}

const char *LinkedList::last()
{
    if (head == nullptr) // Liste nicht initialisiert
        return nullptr;

    return tail->data;
}

void LinkedList::visit_all(void (*work)(const char *t))
{
    if (head == nullptr)
        return;

    element *e = head;
    while (e != nullptr)
    {
        work(e->data);
        e = e->next;
    }
}