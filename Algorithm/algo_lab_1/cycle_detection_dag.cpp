#include <bits/stdc++.h>
using namespace std;
const int N = 2e5;

vector<int> adj_list[N];
int visited[N];

bool detect_cycle(int node)
{

  visited[node] = 1;

  for (int adj_node : adj_list[node])
  {
    if (visited[adj_node] == 0)
    {
      bool got_cycle = detect_cycle(adj_node);
      if (got_cycle)
      {
        return true;
      }
    }
    else if (visited[adj_node] == 1)
    {
      return true;
    }
  }
  visited[node] = 2;
  return false;
}

int main()
{
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < m; i++)
  {
    int u, v;
    cin >> u >> v;
    adj_list[u].push_back(v);
  }

  for (int i = 1; i <= n; i++)
  {
    if (visited[i] == 0)
    {
      bool isCycle = detect_cycle(i);
      if (isCycle)
      {
        cout << "YES" << endl;
        break;
      }
      else
      {
        cout << "NO" << endl;
        break;
      }
    }
  }
}