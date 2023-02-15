#include <bits/stdc++.h>
using namespace std;

vector<int> quick_sort(vector<int> a)
{
  // base case :
  if (a.size() < 2)
  {
    return a;
  }
  int pvt = rand() % a.size();
  vector<int> b;
  vector<int> c;
  for (int i = 0; i < a.size(); i++)
  {
    if (i == pvt)
      continue;
    if (a[i] <= a[pvt])
    {
      c.push_back(a[i]);
    }
    else
    {
      b.push_back(a[i]);
    }
  }

  vector<int> sorted_b = quick_sort(b);
  vector<int> sorted_c = quick_sort(c);
  vector<int> sorted_a;
  int id1 = 0;
  int id2 = 0;
  for (int i = 0; i < sorted_b.size(); i++)
  {
    sorted_a.push_back(sorted_b[i]);
  }
  sorted_a.push_back(a[pvt]);
  for (int i = 0; i < sorted_c.size(); i++)
  {
    sorted_a.push_back(sorted_c[i]);
  }
  return sorted_a;
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
  vector<int> result = quick_sort(a);
  ;
  for (int i = 0; i < n; i++)
  {
    cout << result[i] << " ";
  }
  cout << "\n";
  return 0;
}