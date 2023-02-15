#include <bits/stdc++.h>
using namespace std;

// Insertion Sort
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
  for (int i = 1; i < n; i++)
  {
    bool sorted = true;
    int idx = i;
    while(idx >= 1){
      if(a[idx-1] > a[idx]){
      swap(a[idx-1], a[idx]);
      idx --;
    }
    else{
      break;
    }
    }

    cout << "After step : " << i <<" ---> ";
    for (int i = 0; i < n; i++)
    {
      cout << a[i] << " ";
    }
    cout << "\n";
  }
  cout << "After Sort :" << " ";
  ;
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << "\n";
  return 0;
}