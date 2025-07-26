#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, x;
        cin >> l >> r;
        if (r % 2 == 0)
        {
            x = r;
        }
        else
        {
            x = r - 1;
        }

        int c = 0;
        while (x > 1)
        {
            x = x / 2;

            c++;
        }
        cout << c << endl;
    }

    return 0;
}