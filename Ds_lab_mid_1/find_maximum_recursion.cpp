#include <bits/stdc++.h>
using namespace std;
int findMaximum(int arr[], int n)
{
  if (n == 1)
    return arr[0];

  return max(arr[n - 1], findMaximum(arr, n - 1));
}
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int res = findMaximum(a, n);
  cout << res << endl;
  return 0;
}