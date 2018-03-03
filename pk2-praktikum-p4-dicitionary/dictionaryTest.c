#include <stdio.h>
#include "dictionary.h"

int main()
{
    printf("%d\n", insert(1));
    printf("%d\n", insert(3));
    printf("%d\n", delete (3));
    printf("%d\n", insert(5));
    printf("%d\n", member(5) ? 1 : 0); // member() returns (pos + 1) anstatt 1 bei Erfolg, Erfolg ist also !=0
}