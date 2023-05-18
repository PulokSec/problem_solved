// https://www.spoj.com/problems/FARIDA/en/

// S1: memorization

#include <bits/stdc++.h>
using namespace std;

long long int totalCoin(vector<long long int> &a)
{

  if (a.size() == 0)
    return 0;
  if (a.size() == 1)
    return a[0];
  if (a.size() == 2)
    return max(a[0], a[1]);

  vector<long long int> collect(a.size());

  collect[0] = a[0];
  collect[1] = max(a[0], a[1]);

  for (int i = 2; i < a.size(); i++)
  {
    collect[i] = max(collect[i - 2] + a[i], collect[i - 1]);
  }

  return collect[a.size() - 1];
}

int main()
{
  int t, m;
  long long int res;
  cin >> t;
  int c = 0;

  while (c < t && t != 0)
  {
    cin >> m;
    vector<long long int> coin(m);
    for (int i = 0; i < m; i++)
    {
      int n;
      cin >> n;
      coin.push_back(n);
    }

    res = totalCoin(coin);
    cout << "Case " << c + 1 << ": " << res << endl;
    c++;
  }
}
// S2: tabulation

#include<bits/stdc++.h>

using namespace std;



int main(){
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        long long a[n+5], dp[n+5][2];
        a[0] = 0;
        for(int j = 1; j <= n; j++){
          cin >> a[j];
        }
        memset(dp, 0, sizeof(dp));
        for(int j = 1; j <= n; j++)
        {
            dp[j][0] = max(dp[j-1][0], dp[j-1][1]);
            dp[j][1] = dp[j-1][0]+a[j];
        }
        cout << "Case " << i << ": " << max(dp[n][0], dp[n][1]) << endl;
    }
}