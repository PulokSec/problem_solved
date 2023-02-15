#include <bits/stdc++.h>
using namespace std;

int findMissingNumber(vector<int> arr, int len)
{
  int temp;
  temp = ((len + 1) * (len + 2)) / 2;
  for (int i = 0; i < len; i++)
    temp -= arr[i];
  return temp;
}
int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n - 1; i++)
  {
    cin >> a[i];
  }
  int missingNumber = findMissingNumber(a, n - 1);
  cout << missingNumber << endl;
  return 0;
}