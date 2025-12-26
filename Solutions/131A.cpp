#include <iostream>

using namespace std;

void changeCase(char str[], int start)
{
    for (int i = start; str[i] != '\0'; i++)
    {
        if (str[i] < 97)
            str[i] += 32;
        else
            str[i] -= 32;
    }
}

int isAllUpperCase(char str[], int start)
{
    for (int i = start; str[i] != '\0'; i++)
    {
        if (str[i] > 90)
            return 0;
    }
    return 1;
}

int main()
{
    char str[100];
    scanf("%s", str);

    if (isAllUpperCase(str, 0) || str[0] > 90 && isAllUpperCase(str, 1))
        changeCase(str, 0);

    printf("%s", str);
    return 0;
}