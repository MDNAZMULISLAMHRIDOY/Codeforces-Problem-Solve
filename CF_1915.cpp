#include <iostream>
#include <cmath>
using namespace std;

bool canBuildSquare(long long sum)
{
    long long root = sqrt(sum);
    return root * root == sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            sum += a;
        }

        if (canBuildSquare(sum))
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
