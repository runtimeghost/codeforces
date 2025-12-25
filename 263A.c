#include <stdio.h>
#include <math.h>

int main()
{
    int x, ones_row = -1, ones_column = -1;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &x);
            if (x == 1)
            {
                ones_row = i;
                ones_column = j;
            }
        }
    }

    printf("%d", abs(2 - ones_column) + abs(2 - ones_row));

    return 0;
}