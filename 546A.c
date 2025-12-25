#include <stdio.h>

int main()
{
    double k, n, w;

    scanf("%lf%lf%lf", &k, &n, &w);

    double cost = w / 2 * (2 * k + (w - 1) * k);

    int borrow_amount = cost - n;

    printf("%d", borrow_amount > 0 ? borrow_amount : 0);

    return 0;
}