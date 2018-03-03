#include <stdlib.h>

#define SIZE 2

struct element
{
    int data;
    struct element *next;
};
typedef struct element e;

e *dict[SIZE];
int initArray = 0;

int hash(int a) // Hashfunktion
{
    if (!initArray) // Initialize Array at first
    {
        int i;
        for (i = 0; i < SIZE; i++)
            dict[i] = NULL;
        initArray = 1;
    }

    return a % SIZE;
}

e *nextElementSpace(int pos) // returns pointer to free space for next element (NULL if no memory available)
{
    if (dict[pos] == NULL)
    {
        dict[pos] = malloc(sizeof(e));
        dict[pos]->next = NULL;
    }

    e *element = dict[pos];

    while (element->next != NULL)
        element = element->next;

    element->next = malloc(sizeof(e));

    return element->next;
}

int member(int a)
{
    int pos = hash(a);
    e *element = dict[pos];

    while (element != NULL)
    {
        if (element->data == a)
            return 1;
        element = element->next;
    }
    return 0;
}

int insert(int a) // 1: erfolgreich, 0: Dictionary voll
{
    int pos = hash(a);
    e *element = nextElementSpace(pos);

    if (element == NULL)
        return 0;
    else
    {
        element->data = a;
        element->next = NULL;

        return 1;
    }
}

int delete (int a) // 1: erfolgreich, 0: nicht vorhanden
{
    if (!member(a))
        return 0;
    else
    {
        int pos = hash(a);

        if (dict[pos]->data == a)
        {
            e *delete = dict[pos];
            dict[pos] = dict[pos]->next;
            free(delete);
        }
        else
        {
            e *element = dict[pos]; // pointer to first element

            while (element->next->data != a)
                element = element->next;

            e *delete = element->next;
            element->next = element->next->next;
            free(delete);
        }
        return 1;
    }
}