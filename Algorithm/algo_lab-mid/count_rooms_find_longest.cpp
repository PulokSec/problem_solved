#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000;

int n, m;
vector<vector<bool>> visited(MAXN, vector<bool>(MAXN, false));
vector<vector<char>> building(MAXN, vector<char>(MAXN, ' '));

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool isValid(int x, int y)
{
  return x >= 0 && x < n && y >= 0 && y < m && building[x][y] == '.' && !visited[x][y];
}

int bfs(int x, int y)
{
  queue<pair<int, int>> q;
  q.push(make_pair(x, y));
  visited[x][y] = true;
  int roomSize = 0;

  while (!q.empty())
  {
    int cx = q.front().first;
    int cy = q.front().second;
    q.pop();
    roomSize++;

    for (int i = 0; i < 4; i++)
    {
      int nx = cx + dx[i];
      int ny = cy + dy[i];
      if (isValid(nx, ny))
      {
        q.push(make_pair(nx, ny));
        visited[nx][ny] = true;
      }
    }
  }

  return roomSize;
}

int main()
{
  cin >> n >> m;

  building.resize(n, vector<char>(m));
  visited.resize(n, vector<bool>(m, false));

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> building[i][j];
    }
  }

  int roomCount = 0;
  int maxRoomSize = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (building[i][j] == '.' && !visited[i][j])
      {
        roomCount++;
        int roomSize = bfs(i, j);
        maxRoomSize = max(maxRoomSize, roomSize);
      }
    }
  }

  cout << "Rooms - " << roomCount << endl;
  cout << "Length of the longest room - " << maxRoomSize << endl;

  return 0;
}
