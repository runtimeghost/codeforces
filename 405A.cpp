#include <iostream>
#include <cmath>

using namespace std;

int max(int nums[], int n)
{
    int maxNum = nums[0];
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > maxNum)
            maxNum = nums[i];
    }
    return maxNum;
}

int main()
{
    int n;
    scanf("%d", &n);

    int boxes[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &boxes[i]);

    int m = max(boxes, n);
    int matrix[m][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            if (j >= m - boxes[i])
                matrix[j][i] = 1;
            else
                matrix[j][i] = 0;
        }
    }

    for (int i = 0; i < m - 1; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (matrix[i][j] == 1)
            {
                int k = j;
                while (k < n - 1 && matrix[i][k + 1] == 0)
                    k++;
                matrix[i][j] = 0;
                matrix[i][k] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        boxes[i] = 0;
        for (int j = 0; j < m; j++)
            boxes[i] += matrix[j][i];
    }

    for (int i = 0; i < n; i++)
        printf("%d ", boxes[i]);

    return 0;
}