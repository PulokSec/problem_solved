// Grid Paths using tabulation
#include <bits/stdc++.h>

using namespace std;
const int N = 1e9 + 7;

int main()
{
	int n;
	cin >> n;
	char grid[n][n];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> grid[i][j];

	int dp[n][n];
	memset(dp, 0, sizeof(dp));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (grid[i][j] == '*')
				continue;
			if (i == 0 && j == 0)
				dp[i][j] = 1;

			if (i - 1 >= 0)
			{
				dp[i][j] += dp[i - 1][j];
				dp[i][j] %= N;
			}
			if (j - 1 >= 0)
			{
				dp[i][j] += dp[i][j - 1];
				dp[i][j] %= N;
			}
		}
	}
	cout << dp[n - 1][n - 1];
}

// Grid Paths using recursion and memorization
#include <bits/stdc++.h>

using namespace std;

const int N = 1e9 + 7;

int n;
char grid[1000][1000];
int dp[1000][1000];

int countPaths(int i, int j)
{
	if (i < 0 || j < 0)
		return 0;
	if (grid[i][j] == '*')
		return 0;
	if (i == 0 && j == 0)
		return 1;

	if (dp[i][j] != -1)
		return dp[i][j];

	int paths = 0;
	if (i - 1 >= 0)
	{
		paths += countPaths(i - 1, j);
		paths %= N;
	}
	if (j - 1 >= 0)
	{
		paths += countPaths(i, j - 1);
		paths %= N;
	}

	return dp[i][j] = paths;
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> grid[i][j];
		}
	}

	memset(dp, -1, sizeof(dp));

	cout << countPaths(n - 1, n - 1);

	return 0;
}
