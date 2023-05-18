#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> adj_list[N];
bool visited[N];

bool bfs(int start, int end)
{
  queue<int> q;
  q.push(start);
  visited[start] = true;

  while (!q.empty())
  {
    int u = q.front();
    q.pop();

    for (int adj_node : adj_list[u])
    {
      if (!visited[adj_node])
      {
        visited[adj_node] = true;
        if (adj_node == end)
        {
          return true;
        }
        q.push(adj_node);
      }
    }
  }

  return false;
}

int main()
{
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    adj_list[a].push_back(b);
    adj_list[b].push_back(a);
  }

  if (bfs(1, n))
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  return 0;
}
