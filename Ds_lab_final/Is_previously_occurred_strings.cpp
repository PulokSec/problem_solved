
#include <bits/stdc++.h>

using namespace std;

void previouslyOccurred(vector<string> arr, int n)
{
    map<string, int> index;

    for (int i = 0; i < n; i++)
    {
        if (index.find(arr[i]) == index.end())
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << index[arr[i]] << endl;
        }
        index[arr[i]] = i;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    previouslyOccurred(arr, n);
    cout << endl;

    return 0;
}
