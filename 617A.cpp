#include <iostream>

using namespace std;

int main()
{
    int x;
    scanf("%d", &x);

    int steps = 0;

    for (int i = 5; i > 0; i--)
    {
        steps += x / i;
        x %= i;
    }

    printf("%d", steps);

    return 0;
}