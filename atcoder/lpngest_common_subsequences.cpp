#include <bits/stdc++.h>

using namespace std;

string LCS(const string &s, const string &t)
{

  int m = s.length();
  int n = t.length();

  vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

  for (int i = 1; i <= m; ++i)
  {
    for (int j = 1; j <= n; ++j)
    {
      if (s[i - 1] == t[j - 1])
      {
        dp[i][j] = dp[i - 1][j - 1] + 1;
      }
      else
      {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }

  string lcs;
  int i = m, j = n;
  while (i > 0 && j > 0)
  {
    if (s[i - 1] == t[j - 1])
    {
      lcs = s[i - 1] + lcs;
      i--;
      j--;
    }
    else if (dp[i - 1][j] > dp[i][j - 1])
    {
      i--;
    }
    else
    {
      j--;
    }
  }

  return lcs;
}

int main()
{
  string s, t;
  cin >> s >> t;

  string lcs = LCS(s, t);

  cout << lcs << endl;

  return 0;
}