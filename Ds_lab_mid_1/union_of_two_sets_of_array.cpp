#include <bits/stdc++.h>
using namespace std;

set<int> unionSetOfArrays(vector<int> arr1, int n1, vector<int> arr2, int n2)
{
  set<int> newSet;
  for (int i = 0; i < n1; i++)
  {
    newSet.insert(arr1[i]);
  }
  for (int i = 0; i < n2; i++)
  {
    newSet.insert(arr2[i]);
  }
  return newSet;
}

int main()
{
  int n1;
  cin >> n1;
  vector<int> arr1(n1);
  for (int i = 0; i < n1; i++)
  {
    cin >> arr1[i];
  }

  int n2;
  cin >> n2;
  vector<int> arr2(n2);
  for (int i = 0; i < n2; i++)
  {
    cin >> arr2[i];
  }

  set<int> unionSet = unionSetOfArrays(arr1, n1, arr2, n2);

  for (auto i : unionSet)
  {
    cout << i << " ";
  }

  return 0;
}
