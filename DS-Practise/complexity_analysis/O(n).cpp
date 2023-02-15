#include <bits/stdc++.h>
using namespace std;

// Time Complexity : O(n + 1 + n + 1) = O(2*n + 1) = O(n)
// Memory Complexity : O(n)
int main ()
{
  int n;
  cin >> n;
  vector<int>a(n);
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
  int maxi = a[0];
  int mini = a[0];
  int sum = 0;
  for(int i=0; i<n; i++){
    maxi = max(a[i], maxi);
    mini = min(a[i], mini);
    sum = sum + a[i];
  }
  cout<< "Max : " << maxi<<"\n";
  cout<< "Min : " << mini<<"\n";
  cout<< "Sum : " << sum<<"\n";
  return 0;
}