#include <iostream>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        int count = 0;
        while (a <= n && b <= n)
        {
            if (a < b)
            {
                a += b;
            }
            else
            {
                b += a;
            }
            count++;
        }
        cout << count << endl;
    }

    return 0;
}