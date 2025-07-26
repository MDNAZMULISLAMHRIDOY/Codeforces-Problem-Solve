#include <iostream>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int t;
        cin >> t;
        string str;
        cin >> str;
        if (str == "Timur" || str == "miurT" || str == "Trumi" || str == "mriTu")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}