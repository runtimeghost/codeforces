#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double n, m, a;

    cin >> n >> m >> a;

    long long int required_flagstones = ceil(m / a) * ceil(n / a);

    cout << required_flagstones;

    return 0;
}