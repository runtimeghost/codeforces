#include <iostream>

using namespace std;

int main()
{
    char initial_str[128];

    scanf("%s", initial_str);

    char final_str[256];

    int i, k;
    for (i = 0, k = 0; initial_str[i] != '\0' && initial_str[i] != '\n'; i++)
    {
        char c = initial_str[i];
        if (c < 91)
            c += 32;
        if (!(c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i'))
        {
            final_str[k++] = '.';
            final_str[k++] = c;
        }
    }
    final_str[k] = '\0';

    printf("%s", final_str);

    return 0;
}