#include <stdio.h>

void printAscii(int s)
{
    int oldS = s;

    char i = 0;
    for (i = 32; i < 127; i++)
    {
        printf("%3d %c  ", i, i);
        s--;
        if (s == 0)
        {
            printf("\n");
            s = oldS;
        }
    }
}