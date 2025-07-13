#include <iostream>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a > b)
        {
            swap(a, b);
        }
        if (a > c)
        {
            swap(a, c);
        }
        if (b > c)
        {
            swap(b, c);
        }

        if (b == c)
        {
            cout << "YES" << endl;
            cout << a << " " << a << " " << c << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}