#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void rotateRight(int arr[], int n, int k)
{
    // k = 3;
    // n = 8;

    int temp[k];

    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }

    for (int i = n - k; i < n; i++)
    {
        arr[i] = temp[i - (n - k)];
    }
}

int main()
{
    int n = 8;
    // cin >> n;
    int arr[] = {5, 9, 5, 23, 86, 15, 78, 12, 53};
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    int k = 4;
    // cin >> k;

    rotateRight(arr, n, k);
    cout << "after rotating array to right" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
