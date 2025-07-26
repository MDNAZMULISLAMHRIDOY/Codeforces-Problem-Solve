#include <iostream>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int arr[10];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            if (arr[0] < arr[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}