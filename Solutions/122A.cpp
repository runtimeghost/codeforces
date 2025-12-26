#include <iostream>

using namespace std;

int isDivisibleByALuckyNum(int x)
{
    int luckyNums[13] = {4, 7, 44, 47, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    for (int i = 0; i < 13; i++)
    {
        if (x % luckyNums[i] == 0)
            return 1;
    }

    return 0;
}

int main()
{
    int n;

    scanf("%d", &n);

    if (isDivisibleByALuckyNum(n))
        printf("YES");
    else
        printf("NO");

    return 0;
}