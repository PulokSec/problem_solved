#include<bits/stdc++.h>
using namespace std;

int n_power_m(int n,int m)
{
    if (m == 0)
        return 1;

    return n * n_power_m(n, m-1);
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<n_power_m(n, m)<<"\n";
    return 0;
}
