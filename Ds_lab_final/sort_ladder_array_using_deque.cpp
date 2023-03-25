#include <bits/stdc++.h>
using namespace std;

vector<int> sortLadderArray(vector<int> &arr, int n)
{
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        auto it = upper_bound(dq.begin(), dq.end(), arr[i]);
        dq.insert(it, arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = dq.front();
        dq.pop_front();
    }
    return arr;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> sortedArr = sortLadderArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << sortedArr[i] << " ";
    }
    cout << endl;

    return 0;
}
