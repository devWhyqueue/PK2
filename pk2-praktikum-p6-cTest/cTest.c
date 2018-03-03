#include <stdlib.h>

int countspaceIndex(char s[])
{
    int anz = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == ' ')
            anz++;
        i++;
    }
    return anz;
}

int countspacePointer(char s[])
{
    int anz = 0;
    char *sPt = s;
    while (*sPt != '\0')
    {
        if (*sPt == ' ')
            anz++;
        sPt++;
    }
    return anz;
}

double min(double a[], int n)
{
    if (n == 0)
        return 0.0;
    else
    {
        double min = a[0];
        int i;
        for (i = 1; i < n; i++)
        {
            if (a[i] < min)
                min = a[i];
        }
        return min;
    }
}

static int calcSize(const char *a)
{
    int size = 0;
    const char *aPt = a;
    while (*aPt != '\0')
    {
        size++;
        aPt++;
    }
    return size;
}

char *stringcat(const char *str1, const char *str2)
{
    int sizeCat = calcSize(str1) + calcSize(str2) + 1; // + Null-Byte
    char *strCat = malloc((sizeCat) * sizeof(char));
    char *strCatPt = strCat;

    const char *str1Pt = str1;
    while (*str1Pt != '\0')
    {
        *strCatPt = *str1Pt;
        str1Pt++;
        strCatPt++;
    }
    const char *str2Pt = str2;
    while (*str2Pt != '\0')
    {
        *strCatPt = *str2Pt;
        str2Pt++;
        strCatPt++;
    }
    *strCatPt = '\0';

    return strCat;
}