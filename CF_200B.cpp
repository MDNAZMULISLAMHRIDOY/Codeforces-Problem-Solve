#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    double arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    double sum = 0, l = (double)t;
    for (int i = 0; i < t; i++)
    {
        sum += arr[i];
    }
    printf("%.12lf\n", sum / l);
    return 0;
}