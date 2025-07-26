#include <bits/stdc++.h>
using namespace std;
int size_ofEqual(int arr[], int size)
{
    int temp = 1;
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count >= temp)
        {
            temp = count;
        }
    }
    return temp;
}
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int t;
        cin >> t;
        int arr[t];
        for (int i = 0; i < t; i++)
        {
            cin >> arr[i];
        }
        int c = size_ofEqual(arr, t);
        cout << t - c << endl;
    }

    return 0;
}
