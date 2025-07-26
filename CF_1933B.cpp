#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int t;
        cin >> t;
        vector<int> v;
        for (int i = 0; i < t; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int sum = 0, count = 0;
        for (int i = 0; i < t; i++)
        {
            for (int j = 0; j < v.size(); j++)
            {
                sum += v[j];
            }
            if (sum % 3 == 0 || (sum + 1) % 3 == 0 || v.size() == 0)
            {
                break;
            }
            else
            {
                v.pop_back();
                count++;
                sum = 0;
            }
        }
        cout << count << endl;
        v.cend();
    }
    return 0;
}