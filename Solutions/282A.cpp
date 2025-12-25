#include <iostream>

using namespace std;

int main()
{
    int n, x = 0;
    scanf("%d", &n);

    char stmnt[4];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", stmnt);
        if (stmnt[0] == '+')
            ++x;
        else if (stmnt[0] == '-')
            --x;
        else if (stmnt[1] == '+')
            x++;
        else
            x--;
    }

    printf("%d", x);

    return 0;
}