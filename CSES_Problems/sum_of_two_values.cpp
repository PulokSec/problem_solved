#include <bits/stdc++.h>

using namespace std;

int main()
{

  int n, sum;
  cin >> n >> sum;

  vector<pair<int, int>> arr(n);

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].first;
    arr[i].second = i + 1;
  }

  sort(arr.begin(), arr.end());

  int i = 0, j = n - 1;

  while (i < j)
  {
    if (arr[i].first + arr[j].first < sum)
    {
      i++;
    }
    else if (arr[i].first + arr[j].first > sum)
    {
      j--;
    }
    else
    {
      cout << arr[i].second << " " << arr[j].second << endl;
      return 0;
    }
  }
  cout << "IMPOSSIBLE" << endl;
}
