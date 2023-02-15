#include <bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int>a){
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
bool find_subset(vector<int>a1,vector<int>a2,int m,int n){
  if(n < m){
    return false;
  }
     vector<int> arr1 = merge_sort(a1);
     vector<int> arr2 = merge_sort(a2);
     int i = 0,j = 0 ;
     while (i < m && j < n) {
        if (arr2[j] < arr1[i])
            j++;
        else if (arr2[j] == arr1[i]) {
            i++;
            j++;
        }
        else if (arr2[j] > arr1[i])
            return false;
    }

    if(i < m){
      return false;
    }
    else{
      return true;
    }
}
int main()
{
  int n1,n2;
  cin >> n1;
  vector<int> a1(n1);
  for (int i = 0; i < n1; i++)
  {
    cin >> a1[i];
  }
  cin >> n2;
  vector<int> a2(n2);
  for (int i = 0; i < n2; i++)
  {
    cin >> a2[i];
  }
  if(find_subset(a1,a2,n1,n2) == true){
    cout << "YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }
  return 0;
}