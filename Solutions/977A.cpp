#include<iostream>

using namespace std;

int main()
{
    long long int n;
    int k;

    scanf("%lld%d", &n, &k);

    for (int i=0; i<k; i++) {
        if (n%10) {
            n--;
        }
        else {
            n /= 10;
        }
    }

    printf("%d", n);

    return 0;
}