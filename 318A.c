#include <stdio.h>
#include <math.h>

int main()
{
    long long int n, k;

    scanf("%lld %lld", &n, &k);

    long long int nth_term, mid = ceil(n / 2.0);

    if (k > mid)
        nth_term = (k - mid) * 2;
    else
        nth_term = 1 + (k - 1) * 2;

    printf("%lld", nth_term);
    return 0;
}

// 1 3 5 7 2 4 6 8