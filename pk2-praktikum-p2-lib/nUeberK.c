#include <stdio.h>

long berechneFakultaet(long x)
{
    if (x == 0)
        return 1;

    long ergebnis = 1;
    while (x > 0)
    {
        ergebnis *= x;
        x--;
    }
    return ergebnis;
}

long berechneNUeberK(long n, long k)
{
    long nFak = berechneFakultaet(n);
    long kFak = berechneFakultaet(k);
    long nMinKFak = berechneFakultaet(n - k);
    long ergebnis = nFak / (kFak * nMinKFak);

    return ergebnis;
}