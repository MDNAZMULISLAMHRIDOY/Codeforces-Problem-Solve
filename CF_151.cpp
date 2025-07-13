#include <iostream>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int arr[3];
    int a = (k * l) / nl;
    int b = (c * d);
    int c1 = (p / np);
    arr[0] = a;
    arr[1] = b;
    arr[2] = c1;
    int min = arr[0];
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << min / n << endl;
    return 0;
}