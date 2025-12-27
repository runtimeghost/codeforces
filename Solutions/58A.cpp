#include <iostream>

using namespace std;

int main()
{
    char s[128];

    scanf("%s", &s);

    char target[] = "hello";

    char filtered[128];

    int k = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'h' || s[i] == 'e' || s[i] == 'l' || s[i] == 'o')
        {
            filtered[k++] = s[i];
        }
    }

    int i = 0, j = 0;
    while (i < k && target[j] != '\0')
    {
        if (target[j] == filtered[i])
        {
            if (j == 2)
            {
                i++;
                j++;
                continue;
            }
            while (i < k && target[j] == filtered[i])
                i++;
            j++;
        }
        else
            i++;
    }

    if (target[j] == '\0')
        printf("YES");
    else
        printf("NO");

    return 0;
}