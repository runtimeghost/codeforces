#include<iostream>
#include<cmath>

using namespace std;

int sum(int arr[], int n)
{
    int s = 0;
    for (int i=0; i<n; i++) {
        s += arr[i];
    }

    return s;
}

void merge(int arr[], int f, int m, int l)
{
    int n = l-f+1;
    int arr2[n];
    int i, j, k=0;

    for (i=f, j=m+1; i<=m && j<=l; k++) {
        if (arr[i] > arr[j]) {
            arr2[k] = arr[i];
            i++;
        }
        else {
            arr2[k] = arr[j];
            j++;
        }
    }

    while (i<=m)
    {
        arr2[k] = arr[i];
        i++;
        k++;
    }

    while (j<=l)
    {
        arr2[k] = arr[j];
        j++;
        k++;
    }

    k=0;

    while (f<=l)
    {
        arr[f] = arr2[k];
        f++;
        k++;
    }
}

void msort(int arr[], int f, int l)
{
    if (f<l) {
        int m = f + (l-f)/2;
        msort(arr, f, m);
        msort(arr, m+1, l);
        merge(arr, f, m, l);
    }
}

int main()
{
    int n;
    cin >> n;

    int coins[n];
    for (int i=0; i<n; i++)
        cin >> coins[i];
    
    msort(coins, 0, n-1);

    int half = sum(coins, n)/2;
    int i=-1;

    while (sum(coins, i) <= half) 
        i++;

    cout << i;

    return 0;
}