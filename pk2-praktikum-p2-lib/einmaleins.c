#include <stdio.h>

void printEinmaleins(int von, int bis)
{
   printf("Einmaleins\n");
    printf("von: ");
    scanf("%d", &von);
    printf("bis: ");
    scanf("%d", &bis);

    int i;
    for (i = 1; i < 11; i++)
    {
        int j;
        for(j = von; j <= bis; j++)
        {
            int printNum = j * i;
            printf("%3d ", printNum);
        }
        printf("\n");
    }
}