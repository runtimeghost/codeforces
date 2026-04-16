#include<iostream>
#include<map>

using namespace std;

bool isDistinct(int n)
{
    map<int, int> digitCounts;

    while (n>0) {
        digitCounts[n%10]++;
        n/=10;
    }

    for (pair<int, int> p: digitCounts) {
        if (p.second != 1) {
            return false;
        }
    }
    return true;
}

int main()
{
    int year;
    cin >> year;

    do {
        year++;
    } while(!isDistinct(year));

    cout << year;

    return 0;
}