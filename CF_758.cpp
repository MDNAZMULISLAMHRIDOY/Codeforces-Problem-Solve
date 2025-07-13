#include <iostream>
using namespace std;
int max(int arr[], int size)
{
    int m = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > m)
        {
            m = arr[i];
        }
    }
    return m;
}
int main()
{
    int tt;
    cin >> tt;
    int arr[tt];
    for (int i = 0; i < tt; i++)
    {
        cin >> arr[i];
    }

    int n = max(arr, tt);
    int sum = 0;
    for (int i = 0; i < tt; i++)
    {
        int t = n - arr[i];
        sum += t;
    }
    cout << sum << endl;
    return 0;
}