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
void find_pair_sum(vector<int>arr,int n,int target){
  int low = 0;
  int high = n - 1;
  int count = 0;
    while (low < high)
    {
        if (arr[low] + arr[high] == target)
        {
            count ++;
        }

        if(arr[low] + arr[high] > target)
        low++;
        else
        high--;
    }
    cout << count << endl;
}
int main()
{
  int n,sum;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cin >> sum;
  vector<int> result = merge_sort(a);
  find_pair_sum(result,n,sum);
  return 0;
}