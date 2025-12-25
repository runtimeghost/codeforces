#include <stdio.h>

int main()
{
    char expr[1024];
    scanf("%s", expr);

    int freq[3] = {0, 0, 0};

    for (int i = 0; expr[i] != '\0'; i++)
    {
        if (expr[i] != '+')
            freq[expr[i] - 49]++;
    }

    int n = freq[0] + freq[1] + freq[2], k = 0;

    int nums[n];

    for (int i = 0; i < 3; i++)
    {
        while (freq[i] > 0)
        {
            nums[k] = i + 1;
            k++;
            freq[i]--;
        }
    }

    int i;
    for (i = 0; i < n - 1; i++)
    {
        printf("%d+", nums[i]);
    }

    printf("%d", nums[i]);

    return 0;
}