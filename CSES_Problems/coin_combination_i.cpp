#include <bits/stdc++.h>

using namespace std;

const int N = 1e9 + 7;

int main()
{
  int n, sum;
  cin >> n >> sum;
  vector<int> coins(n);
  for (int i = 0; i < n; i++)
    cin >> coins[i];

  vector<int> dp(sum + 1, 0);

  dp[0] = 1;
  for (int i = 0; i <= sum; i++)
  {
    for (int coin : coins)
    {
      if (i + coin <= sum)
        dp[i + coin] = (dp[i + coin] + dp[i]) % N;
    }
  }

  cout << dp[sum] << endl;
}