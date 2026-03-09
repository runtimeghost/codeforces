#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int number_of_won_matches[] = {0, 0};

    for (char c: s) {
        number_of_won_matches[c=='D']++;
    }

    if (number_of_won_matches[0] > number_of_won_matches[1]) {
        cout << "Anton";
    }
    else if (number_of_won_matches[0] < number_of_won_matches[1]) {
        cout << "Danik";
    }
    else {
        cout << "Friendship";
    }

    return 0;
}