#include <iostream>
using namespace std;
bool win(string str)
{
    bool ans = false;
    for (int i = 0; i < str.size(); i += 2)
    {
        if (str[i] != str[i + 1])
        {
            ans = true;
            return ans;
        }
    }

    return ans;
}
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string str;
        cin >> str;
        bool a = win(str);
        if (a == true)
        {
            cout << "DA" << endl;
        }

        else
        {
            cout << "NET" << endl;
        }
    }
    return 0;
}