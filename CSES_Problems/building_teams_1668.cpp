// problem link - https://cses.fi/problemset/task/1668


/*
5 4
1 2
1 3
2 3
4 5 

Output -> 
1 2 2 1 2
1 2 2 2 1
2 1 1 2 1


(2)  (1)
1 -- 2
|
3
(1)

(2)  (1)
4 -- 5

*/

#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

int teams[N];
int visited[N];
vector<int> adj_list[N];

bool dfs(int node)
{
  visited[node] = 1;
  for (int adj_node: adj_list[node])
  {
    if (visited[adj_node] == 0)
    {
// assign a different no. to adj_node
      if (teams[node] == 1)
        teams[adj_node] = 2;
      else
        teams[adj_node] = 1;

      bool possible = dfs(adj_node);
      if (!possible)
      {
        return false;
      }
    }
    else
  {
    // check if no. is same or different
    if (teams[node] == teams[adj_node])
    {
      return false;
    }
  }
  }
  

  return true;
}
int main()
{
  int nodes, edges;
  cin >> nodes >> edges;
  for (int i = 0; i < edges; i++)
  {
    int u, v;
    cin >> u >> v;
    adj_list[u].push_back(v);
    adj_list[v].push_back(u);
  }

  bool is_possible = true;

  for (int i = 1; i <= nodes; i++)
  {
    if (visited[i] == 0)
    {
      teams[i] = 1;
      bool ok = dfs(i);
      if (!ok)
      {
        is_possible = false;
        break;
      }
    }
  }
  if (!is_possible)
  {
    cout << "IMPOSSIBLE" << endl;
  }
  else
  {
    for (int i = 1; i <= nodes; i++)
    {
      cout << teams[i] << " ";
    }
    cout << endl;
  }

  return 0;
}