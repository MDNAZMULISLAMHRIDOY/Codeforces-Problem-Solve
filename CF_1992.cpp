#include <bits/stdc++.h>
using namespace std;
int main()
{

    int tt;
    cin >> tt;
    while (tt--)
    {
        vector<int> v;
        for (int i = 0; i < 3; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        sort(v.begin(), v.end());
        for (int i = 0; i < 5; i++)
        {
            v[0] += 1;
            sort(v.begin(), v.end());
        }
        int r = 1;
        for (int i = 0; i < 3; i++)
        {
            r *= v[i];
        }
        cout << r << endl;
    }

    return 0;
}