#include <iostream>

using namespace std;

int max(int nums[], int n)
{
    int max_num = nums[0];

    for (int i = 1; i < n; i++)
    {
        if (nums[i] > max_num)
            max_num = nums[i];
    }

    return max_num;
}

int main()
{
    int nums[3];
    scanf("%d%d%d", &nums[0], &nums[1], &nums[2]);

    /*
    ==========================
    Possible Combinations
    ==========================
    + +
    + *
    * +
    * *
    (+) *
    * (+)
    ==========================
    */

    int possible_results[6] = {
        nums[0] + nums[1] + nums[2],
        nums[0] + nums[1] * nums[2],
        nums[0] * nums[1] + nums[2],
        nums[0] * nums[1] * nums[2],

        (nums[0] + nums[1]) * nums[2],
        nums[0] * (nums[1] + nums[2]),
    };

    printf("%d", max(possible_results, 6));

    return 0;
}