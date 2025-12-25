#include <stdio.h>

int main()
{
    char players[1024];

    scanf("%s", players);

    char current = players[0];

    int count = 1;

    for (int i = 1; players[i] != '\0' && count < 7; i++)
    {
        if (players[i] == current)
            count++;
        else
        {
            count = 1;
            current = players[i];
        }
    }

    if (count < 7)
        printf("NO");
    else
        printf("YES");

    return 0;
}