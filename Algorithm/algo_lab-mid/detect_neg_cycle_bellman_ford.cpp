#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int INF = 1e9;

vector<pair<int, int>> adj_list[N];
int dis[N];

int main()
{

  int n, m;
  cin >> n >> m;

  for (int i = 1; i <= n; i++)
  {
    dis[i] = INF;
  }

  for (int i = 0; i < m; i++)
  {
    int u, v, w;
    cin >> u >> v >> w;
    adj_list[u].push_back({v, w});
  }

  int src = 1;

  dis[src] = 0;

  bool neg_cycle = false;

  for (int i = 1; i <= n; i++)
  {
    for (int node = 1; node <= n; node++)
    {
      for (pair<int, int> adj_node : adj_list[node])
      {
        int u = node;
        int v = adj_node.first;
        int w = adj_node.second;

        if (dis[u] + w < dis[v])
        {
          dis[v] = dis[u] + w;
          if (i == n)
          {
            neg_cycle = true;
          }
        }
      }
    }
  }
  if (neg_cycle == true)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
  cout << endl;
  return 0;
}