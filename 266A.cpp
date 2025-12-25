#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    char str[n];
    scanf("%s", str);

    char current = str[0];

    int count = 0;

    for (int i = 1; i < n; i++)
    {
        if (str[i] == current)
            count++;
        else
            current = str[i];
    }

    printf("%d", count);

    return 0;
}