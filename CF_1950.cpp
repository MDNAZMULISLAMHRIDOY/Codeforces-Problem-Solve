#include <iostream>
#define has "##"
#define dod ".."
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, count = 0;
        cin >> n;
        for (int i = 1; i <= n * 2; i++)
        {
            count++;

            for (int j = 1; j <= n; j++)
            {
                if (j % 2 != 0 && count == 1)
                {
                    cout << has;
                }

                else if (j % 2 == 0 && count == 1)
                {
                    cout << dod;
                }
                else if (j % 2 != 0 && count == 2)
                {
                    cout << has;
                }
                else if (j % 2 == 0 && count == 2)
                {
                    cout << dod;
                }

                else if (j % 2 != 0 && count == 3)
                {
                    cout << dod;
                }
                else if (j % 2 == 0 && count == 3)
                {
                    cout << has;
                }
                else if (j % 2 == 0 && count == 4)
                {
                    cout << has;
                }
                else if (j % 2 != 0 && count == 4)
                {
                    cout << dod;
                }
            }
            if (count == 4)
            {
                count = 0;
            }
            cout << endl;
        }
    }

    return 0;
}