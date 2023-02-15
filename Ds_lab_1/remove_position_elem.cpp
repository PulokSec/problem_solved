#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,start,end;
  cin >> n;
  vector<int> arr(n);
    for(int i=0;i< n;i++){
        cin >> arr[i];
    }
        
  cin >> start;
  cin >> end;
    arr.erase(arr.begin()+start -1,arr.begin()+ end);

    for(int i=0;i< arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}