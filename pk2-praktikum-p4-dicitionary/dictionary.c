#define SIZE 2

enum status
{
    USED = 1,
    DELETED
};
typedef enum status stat;

struct element
{
    int data;
    stat status;
};
typedef struct element e;

e dict[SIZE];
int numElements = 0;

static int hash(int a) // Hashfunktion
{
    return a % SIZE;
}

static int nextPos(int pos) // returns nächste Position
{
    return ++pos % SIZE; // lineares Sondieren
}

int member(int a) // 0: false, !=0: true (pos + 1)
{
    int pos = hash(a);

    int c = 0;
    while (c < numElements)
    {
        if (dict[pos].data == a && dict[pos].status != DELETED) // Schlüssel gefunden
            return ++pos;
        else if (dict[pos].status == USED) // anderer Schlüssel
            pos = nextPos(pos);
        else // leer
            return 0;

        c++;
    }
    return 0;
}

int insert(int a) // 1: erfolgreich, 0: Dictionary voll
{
    if (numElements != SIZE)
    {
        int pos = hash(a);

        while (dict[pos].status == USED)
            pos = nextPos(pos);

        dict[pos].data = a;
        dict[pos].status = USED;

        numElements++;

        return 1;
    }
    else
        return 0;
}

int delete (int a) // 1: erfolgreich, 0: nicht vorhanden
{
    int pos = member(a) - 1;

    if (pos != -1)
    {
        dict[pos].status = DELETED;
        numElements--;
        return 1;
    }
    else
        return 0;
}