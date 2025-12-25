#include <stdio.h>

void toUpper(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] > 90)
            str[i] -= 32;
    }
}

void toLower(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] < 97)
            str[i] += 32;
    }
}

int main()
{
    char str[100];
    scanf("%s", str);

    int upper_count = 0, lower_count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] > 64 && str[i] < 91)
            upper_count++;
        else
            lower_count++;
    }

    if (lower_count < upper_count)
        toUpper(str);
    else
        toLower(str);

    printf("%s", str);

    return 0;
}