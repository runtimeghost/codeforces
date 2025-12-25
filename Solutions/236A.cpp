#include <iostream>

using namespace std;

int contains(char char_list[], char character, int k)
{
    for (int i = 0; i < k; i++)
    {
        if (char_list[i] == character)
            return 1;
    }
    return 0;
}

int main()
{
    char username[100];

    scanf("%s", username);

    char distinct_characters[100];

    int i, k = 0;

    for (i = 0; username[i] != '\0' && username[i] != '\n'; i++)
    {
        if (!contains(distinct_characters, username[i], k))
        {
            distinct_characters[k] = username[i];
            k++;
        }
    }

    if (k % 2 == 0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");

    return 0;
}