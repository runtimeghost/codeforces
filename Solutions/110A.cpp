#include<iostream>

using namespace std;

int main()
{
    long long int n;
    
    cin >> n;

    int lucky_count = 0;

    while (n > 0) {
        int x = n%10;

        if (x == 7 | x == 4) {
            lucky_count++;
        }

        n /= 10;
    }

    int flag = lucky_count > 0;

    while (lucky_count > 0)
    {
        int x = lucky_count%10;
        if (x != 7 && x !=4) {
            flag = 0;
            break;
        }
        lucky_count /= 10;
    }

    printf(flag?"YES":"NO");

    return 0;
}