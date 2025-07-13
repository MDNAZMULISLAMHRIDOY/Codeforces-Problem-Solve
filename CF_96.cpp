#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int len = str.size();
    int count = 0;

    for (int i = 0; i < len - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
            if (count == 6)
            {
                break;
            }
        }
        else
        {
            count = 0;
        }
    }

    if (count < 6)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}
