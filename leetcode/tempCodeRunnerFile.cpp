#include <bits/stdc++.h>
using namespace std;

const long long INF = numeric_limits<long long>::max();
vector<vector<pair<int, int>>> adj_list;
vector<long long> d;
vector<int> visited;

void dijkstra(int src, int n)
{
  for (int i = 1; i <= n; i++)
  {
    d[i] = INF;
  }
  d[src] = 0;

  priority_queue<pair<long long, int>> pq;
  pq.push({0, src});

  while (!pq.empty())
  {
    pair<long long, int> head = pq.top();
    pq.pop();
    int selected_node = head.second;

    if (visited[selected_node])
    {
      continue;
    }

    visited[selected_node] = 1;

    for (auto adj_entry : adj_list[selected_node])
    {
      int adj_node = adj_entry.first;
      int edge_cst = adj_entry.second;

      if (d[selected_node] + edge_cst < d[adj_node])
      {
        d[adj_node] = d[selected_node] + edge_cst;
        pq.push({-d[adj_node], adj_node});
      }
    }
  }
}

int networkDelayTime(vector<vector<int>> &times, int n, int k)
{
  adj_list.resize(n + 1);
  d.resize(n + 1);
  visited.resize(n + 1, 0);

  for (const auto &time : times)
  {
    int u = time[0];
    int v = time[1];
    int w = time[2];
    adj_list[u].push_back({v, w});
  }

  dijkstra(k, n);

  long long maxTime = 0;
  for (int i = 1; i <= n; i++)
  {
    if (d[i] == INF)
    {
      return -1; // There exists at least one unreachable node
    }
    maxTime = max(maxTime, d[i]);
  }

  return maxTime;
}

int main()
{
  int n, k;
  cin >> n >> k;

  int numEdges;
  cin >> numEdges;

  vector<vector<int>> times(numEdges, vector<int>(3));
  for (int i = 0; i < numEdges; i++)
  {
    cin >> times[i][0] >> times[i][1] >> times[i][2];
  }

  int minTime = networkDelayTime(times, n, k);
  cout << minTime << endl;

  return 0;
}