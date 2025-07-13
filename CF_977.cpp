#include <iostream>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    while (t--)
    {
        int mod = n % 10;
        if (mod == 0)
        {
            n = n / 10;
        }
        else
        {
            n = n - 1;
        }
    }
    cout << n << endl;
    return 0;
}