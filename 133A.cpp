#include <iostream>

using namespace std;

int main()
{
    char inst[100];
    scanf("%s", inst);

    int flag = 0;
    for (int i = 0; !(inst[i] == '\0' || flag); i++)
        flag = inst[i] == 'H' || inst[i] == 'Q' || inst[i] == '9';

    if (flag)
        printf("YES");

    else
        printf("NO");

    return 0;
}