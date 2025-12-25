#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int views[n][3];

    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &views[i][0], &views[i][1], &views[i][2]);
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (views[i][0] + views[i][1] + views[i][2] > 1)
            count++;
    }

    printf("%d", count);

    return 0;
}