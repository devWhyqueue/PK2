#include <stdio.h>
#include "cTest.h"

int main()
{
    char s[] = "Hallo, in diesem Satz befinden sich 7 Leerzeichen!";
    printf("Satz: \"%s\"\n", s);
    printf("Anzahl Leerzeichen (Index): %d\n", countspaceIndex(s));
    printf("Anzahl Leerzeichen (Pointer): %d\n", countspacePointer(s));

    double a[] = {5.4, 17, 11.9, 3, 9, 0.8, -4, 10};
    int n = 8;
    printf("\nkleinste Zahl: %f\n", min(a, n));
    double b[0];
    int n2 = 0;
    printf("kleinste Zahl (leeres Feld): %f\n", min(b, n2));

    const char *str1 = "Hallo, ";
    const char *str2 = "Mr. Max Mustermann!";
    printf("\nStrings konkateniert: %s", stringcat(str1, str2));
}