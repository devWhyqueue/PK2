#include <stdio.h>

void printDecToDual(int x)
{
    int ausgabe[16];

    if (x >= 0 && x <= 65535)
    {
        int i = 1;
        while (x > 0)
        {
            int rest = x % 2;
            x /= 2;
            ausgabe[16 - i] = rest;
            i++;
        }

        int j;
        for (j = 0; j < 16; j++)
        {
            if (j <= (16 - i))
            {
                printf("0");
            }
            else
            {
                printf("%d", ausgabe[j]);
            }
        }
    }
}