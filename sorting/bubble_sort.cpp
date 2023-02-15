#include <bits/stdc++.h>
using namespace std;

// Bubble Sort
// time complexity : O(n^2)
// memory complexity : O(n)
// step = 0 , count = n-1
// step = 1 , count = n-2
// ...
// step = n , count = 0
// sum = n*(n-1)/2
int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int step = 0; step < n; step++)
  {
    bool sorted = true;
    int end = n - 1 - step;
    for (int j = 0; j < end; j++)
    {
      if (a[j] > a[j + 1])
      {
        swap(a[j], a[j + 1]);
        sorted = false;
      }
    }
    if (sorted)
      break;
    cout << "After step : " << step + 1 << endl;
    for (int i = 0; i < n; i++)
    {
      cout << a[i] << " ";
    }
    cout << "\n";
  }
  cout << "After Sort :" << endl;
  ;
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << "\n";
  return 0;
}