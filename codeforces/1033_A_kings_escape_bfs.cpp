#include <bits/stdc++.h>

using namespace std;

bool isValid(int x, int y, int n)
{
  return (x >= 1 && x <= n && y >= 1 && y <= n);
}

bool isCheck(int x, int y, int ax, int ay)
{
  bool rowCheck = (y == ay);
  bool columnCheck = (x == ax);
  bool diagonalCheck = (abs(x - ax) == abs(y - ay));

  return (rowCheck || columnCheck || diagonalCheck);
}

bool bfs(int bx, int by, int ax, int ay, int cx, int cy, vector<vector<bool>> &visited, int n)
{
  queue<pair<int, int>> q;
  q.push(make_pair(bx, by));

  while (!q.empty())
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    if (x == cx && y == cy)
      return true;

    visited[x][y] = true;

    int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
    int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};

    for (int i = 0; i < 8; i++)
    {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (isValid(nx, ny, n) && !visited[nx][ny] && !isCheck(nx, ny, ax, ay))
      {
        q.push(make_pair(nx, ny));
      }
    }
  }

  return false;
}

bool canKingEscape(int n, int ax, int ay, int bx, int by, int cx, int cy)
{
  vector<vector<bool>> visited(n + 1, vector<bool>(n + 1, false));

  return bfs(bx, by, ax, ay, cx, cy, visited, n);
}

int main()
{
  int n;
  cin >> n;

  int ax, ay, bx, by, cx, cy;
  cin >> ax >> ay >> bx >> by >> cx >> cy;

  bool kingEscape = canKingEscape(n, ax, ay, bx, by, cx, cy);

  if (kingEscape)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}