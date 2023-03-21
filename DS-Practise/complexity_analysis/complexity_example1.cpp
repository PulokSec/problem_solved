#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  // vector<int> a; // O(1) constant time 
  vector<int> a(n); // O(n) n times
  //for(int i=0; i<n*n; i++){ // O(n^2)
  for(int i=0; i*i<n; i++){ // O(sqrt(n))
    cin >> a[i];
  }
  int sum = 0;
  for(int i=0; i<n; i++){ //O(n)
    sum += a[i];
  } 
  return 0;
}