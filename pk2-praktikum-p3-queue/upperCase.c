char to_upper_case(char c)
{
    if (c > 96 && c < 123)
        return c - 32;
    else
        return -1; // FALSCHE EINGABE
}

void upper(char text[])
{
    int i;
    while (text[i] != '\0')
    {
        char upperChar = to_upper_case(text[i]);
        if (upperChar != -1)
            text[i] = upperChar;
        i++;
    }
}