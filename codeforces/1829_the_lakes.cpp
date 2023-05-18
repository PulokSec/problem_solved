#include <bits/stdc++.h>

using namespace std;

bool isSafe(int n, int m, int r, int c, vector<vector<int>> &matrix, vector<vector<int>> &visited)
{
  if (r >= 0 && r < n && c >= 0 && c < m)
  {
    return (matrix[r][c] && !visited[r][c]);
  }
  else
    return false;
}

int dfs(int n, int m, int r, int c, vector<vector<int>> &matrix, vector<vector<int>> &visited)
{
  int dx[4] = {-1, 1, 0, 0};
  int dy[4] = {0, 0, -1, 1};
  int sum = 0;
  for (int k = 0; k < 4; k++)
  {
    if (isSafe(n, m, r + dx[k], c + dy[k], matrix, visited))
    {
      visited[r + dx[k]][c + dy[k]] = 1;
      sum += matrix[r + dx[k]][c + dy[k]] + dfs(n, m, r + dx[k], c + dy[k], matrix, visited);
    }
  }
  return sum;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, m, cell, max_vol = 0;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    vector<vector<int>> visited(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin >> cell;
        matrix[i][j] = cell;
      }
    }
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (matrix[i][j] != 0 && !visited[i][j])
        {
          visited[i][j] = 1;
          int value = dfs(n, m, i, j, matrix, visited) + matrix[i][j];
          max_vol = max(max_vol, value);
        }
      }
    }
    cout << max_vol << endl;
  }
  return 0;
}