#include <stdio.h>
#include "ascii.h"
#include "einmaleins.h"
#include "decToDual.h"
#include "nUeberK.h"

int main()
{
   printf("Aufgabe 1: ASCII-CODE\n");
   printf("---------------------\n");
   printAscii(10);

   printf("\n\nAufgabe 2: Einmaleins\n");
   printf("---------------------\n");
   printEinmaleins(10, 20);

   printf("\n\nAufgabe 3: Dualzahl zu 27\n");
   printf("---------------------\n");
   printDecToDual(27);

   printf("\n\nAufgabe 4: Binomialkoeffizient\n");
   printf("---------------------\n");
   long erg = berechneNUeberK(9, 6);
   printf("%ld", erg);
}