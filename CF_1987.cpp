#include <iostream>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a, b;
        cin >> a >> b;
        cout << (a - 1) * b + 1 << endl;
    }

    return 0;
}