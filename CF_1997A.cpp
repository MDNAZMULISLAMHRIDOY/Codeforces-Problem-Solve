#include <iostream>
#include <vector>
#include <string>
using namespace std;

string find_missing_letter(const vector<string> &arr)
{
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    for (char letter : alphabet)
    {
        bool found = false;
        for (const string &s : arr)
        {
            if (s[0] == letter)
            {
                found = true;
                break;
            }
        }
    }
    int count = 0;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
    }
    if (count == 0)
    {
        arr[arr.size()].push_back(alphabet);
        return arr;
    }
    else
    {
        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                arr[i + 1].push_back(alphabet);
                return arr;
            }
        }
    }
    return arr;
}

int main()
{
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << find_missing_letter(arr);
    return 0;
}
