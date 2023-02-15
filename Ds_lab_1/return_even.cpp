#include<bits/stdc++.h>
using namespace std;

 vector<int> even_generator(vector<int> array){
     for (int i = 0; i < array.size();i++) {
        if (array[i] % 2 != 0) {
            array.erase(array.begin()+i);
        }
    }
    return array;
 }
int main()
{
    vector<int> arr{ 1, 2, 3, 4, 5};

    vector<int> result = even_generator(arr);
    for(int i : result){
        cout << i << " ";
    }
    return 0;
}