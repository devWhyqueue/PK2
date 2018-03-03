#include <stdio.h>
#include "upperCase.h"
#include "queue.h"

int main()
{
    printf("Grosses c: %c\n", to_upper_case('c'));

    char text[] = "Was ist das fuer 1 life?";
    upper(text);
    printf("%s\n", text);

    enqueue(1);
    enqueue(2);
    enqueue(2);
    printf("%i ", dequeue());
    enqueue(3);
    printf("%i ", dequeue());
    printf("%i ", dequeue());
    printf("%i ", dequeue());
    enqueue(4);
    enqueue(5);
    printf("%i ", dequeue());
    printf("%i \n", dequeue());

    return 0;
}