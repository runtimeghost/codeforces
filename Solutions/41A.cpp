#include<iostream>

using namespace std;

string reversed(string x, int n)
{
    string r;

    for (int i=n-1; i>=0; i--) {
        r += x[i];
    }
    return r;
}

int main()
{
    string s, t;
    cin >> s >> t;

    if (s == reversed(t, t.length())) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}