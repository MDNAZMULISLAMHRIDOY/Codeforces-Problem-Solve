#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    int ans = 0;
    vector<string> str;
    for (int i = 0; i < tt; i++)
    {
        string s;
        cin >> s;
        str.push_back(s);
    }
    for (int i = 0; i < tt - 1; i++)
    {
        if (str[i] != str[i + 1])
        {
            ans++;
        }
        }
    cout << ans + 1 << endl;

    return 0;
}