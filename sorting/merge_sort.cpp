#include <bits/stdc++.h>
using namespace std;

// Merge Sort
// time complexity : O(n log n)
// memory complexity : O(n)

vector<int> merge_sort(vector<int>a){
  //base case :
  if(a.size() <2){
    return a;
  }
  int mid = a.size() /2;
  vector<int> b;
  vector<int> c;
  for(int i = 0; i < mid; i++){
    b.push_back(a[i]);
  }
  for(int i = mid; i < a.size(); i++){
    c.push_back(a[i]);
  }
  vector<int>sorted_b = merge_sort(b);
  vector<int>sorted_c = merge_sort(c);
  vector<int> sorted_a;
  int id1 = 0;
  int id2 = 0;
  for(int i = 0; i < a.size(); i++){
    if(id1 == sorted_b.size()){
      sorted_a.push_back(sorted_c[id2]);
      id2++;
    }
    else if(id2 == sorted_c.size()){
      sorted_a.push_back(sorted_b[id1]);
      id1++;
    }
    else if(sorted_b[id1] > sorted_c[id2]){
      sorted_a.push_back(sorted_c[id2]);
      id2++;
    }
    else{
      sorted_a.push_back(sorted_b[id1]);
      id1++;
    }
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
  vector<int> result = merge_sort(a);
  cout << "After Sort :" << " ";
  ;
  for (int i = 0; i < n; i++)
  {
    cout << result[i] << " ";
  }
  cout << "\n";
  return 0;
}