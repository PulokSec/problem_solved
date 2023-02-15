#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int l, int r, int x)
{
  if (r >= l)
  {
    int mid = l + (r - l) / 2;
    if (arr[mid] == x)
    {
      return mid;
    }

    if (arr[mid] > x)
    {
      return binarySearch(arr, l, mid - 1, x);
    }
    return binarySearch(arr, mid + 1, r, x);
  }
  return -1;
}

int main()
{
  int n, num;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cin >> num;
  int result = binarySearch(arr, 0, n, num);
  if (result == -1)
  {
    cout << "NO" << endl;
  }
  else
  {
    cout << "YES" << endl;
  }
  return 0;
}