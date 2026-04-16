#include <iostream>

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;

    int friend_hights[n];

    for (int i=0; i<n; i++) {
        cin >> friend_hights[i];
    }

    int minimum_width = n;

    for (int i=0; i<n; i++) {
        if (friend_hights[i] > h) {
            minimum_width++;
        }
    }

    cout << minimum_width;

    return 0;
}