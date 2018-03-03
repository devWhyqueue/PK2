#define CAPACITY 3

int queue[CAPACITY];
int start = 0;
int size = 0;

void enqueue(int value)
{
    if (size == CAPACITY)
        size--;
    int pos = (start + size) % CAPACITY;
    queue[pos] = value;
    size++;
}

int dequeue()
{
    if (size == 0)
        return -1;
    int element = queue[start];
    start = ++start % CAPACITY;
    size--;
    return element;
}