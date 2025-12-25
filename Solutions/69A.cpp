#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int vector_coordinates[n][3];
    for (int i = 0; i < n; i++)
        scanf("%d%d%d", &vector_coordinates[i][0], &vector_coordinates[i][1], &vector_coordinates[i][2]);

    int resultant[3] = {0, 0, 0};

    for (int i = 0; i < n; i++)
    {
        resultant[0] += vector_coordinates[i][0];
        resultant[1] += vector_coordinates[i][1];
        resultant[2] += vector_coordinates[i][2];
    }

    if (resultant[0] == 0 && resultant[1] == 0 && resultant[2] == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}