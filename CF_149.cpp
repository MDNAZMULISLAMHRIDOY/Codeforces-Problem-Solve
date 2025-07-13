#include <bits/stdc++.h>
using namespace std;
int main()
{
    int score;
    cin >> score;
    vector<int> arr;
    for (int i = 0; i < 12; i++)
    {
        int v;
        cin >> v;
        arr.push_back(v);
    }
    int sum = 0, count = 0, c = 0;
    sort(arr.begin(), arr.end());
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        sum += arr[i];
        c++;
        if (sum >= score)
        {
            count = i;
            break;
        }
        else if (i == 0 && sum < score)
        {
            count = -1;
        }
    }
    if (score == 0)
    {
        cout << "0" << endl;
    }
    else if (count == -1)
    {
        cout << count << endl;
    }
    else
    {
        cout << c << endl;
    }
    return 0;
}