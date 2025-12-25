#include <iostream>

using namespace std;

int main()
{
    int n, k;

    scanf("%d%d", &n, &k);

    int scores[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &scores[i]);
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (scores[i] == 0)
        {
            break;
        }
        if (scores[i] >= scores[k - 1])
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}