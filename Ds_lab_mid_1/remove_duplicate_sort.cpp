#include <bits/stdc++.h>
using namespace std;
void remove_duplicate_sort(vector<int> arr, int n)
{
  if (n == 0)
  {
    return;
  }
  std::sort(arr.begin(), arr.end());
  int i = 0;
  int j = 0;
  for (int i = 0; i < n - 1; i++)
  {
    if (arr[i] != arr[i + 1])
    {
      arr[j++] = arr[i];
    }
  }
  arr[j++] = arr[n - 1];
  for (int k = 0; k < j; k++)
  {
    cout << arr[k] << " ";
  }
}
int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  remove_duplicate_sort(a, n);
  return 0;
}