#include <stdio.h>
#include <math.h>

int main()
{
    char s1[100], s2[100];

    scanf("%s%s", s1, s2);

    int diff = 0;
    for (int i = 0; s1[i] != '\0' && diff == 0; i++)
    {
        if (s1[i] > 'Z')
            s1[i] -= 32;
        if (s2[i] > 'Z')
            s2[i] -= 32;

        diff = s1[i] - s2[i];
    }

    if (diff < 0)
        printf("-1");
    else
        printf("%d", diff > 0);

    return 0;
}