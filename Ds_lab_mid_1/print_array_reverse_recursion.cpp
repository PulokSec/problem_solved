#include <bits/stdc++.h>
using namespace std;
void print_reverse(vector<int> arr, int n){
   int i;
    if(n>0)
    {
        i=n-1;
        cout<<arr[i]<<" ";
        print_reverse(arr,i);
    }
return;
}
int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  print_reverse(a,n);
  return 0;
}