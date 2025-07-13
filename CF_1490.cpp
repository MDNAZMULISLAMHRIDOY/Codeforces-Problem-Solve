#include <bits/stdc++.h>
using namespace std;
int minSize(vector<int> pro, vector<int> math, vector<int> other)
{
    int s1 = pro.size();
    int s2 = math.size();
    int s3 = other.size();
    vector<int> min;
    min.push_back(s1);
    min.push_back(s2);
    min.push_back(s3);
    sort(min.begin(), min.end());
    return min[0];
}
int main()
{
    int tt;
    vector<int> program;
    vector<int> math;
    vector<int> other;
    cin >> tt;
    int arr[tt];
    for (int i = 0; i < tt; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < tt; i++)
    {
        if (arr[i] == 1)
        {
            program.push_back(i + 1);
        }
        else if (arr[i] == 2)
        {
            math.push_back(i + 1);
        }
        else if (arr[i] == 3)
        {
            other.push_back(i + 1);
        }
    }
    int min = minSize(program, math, other);
    cout << min << endl;
    for (int i = 0; i < min; i++)
    {
        cout << program[i] << " " << math[i] << " " << other[i] << endl;
    }
    return 0;
}