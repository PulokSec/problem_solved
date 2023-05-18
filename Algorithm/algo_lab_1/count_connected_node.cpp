#include <bits/stdc++.h>
using namespace std;
const int N = 2e5;

vector<int> adj_list[N];

int main()
{
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < m; i++)
  {
    int u, v;
    cin >> u >> v; // u -> v
    adj_list[u].push_back(v);
  }
  int count = 0;

  for (int i = 0; i < n; i++)
  {
    if (adj_list[i].size() > 0)
    {
      count++;
    }
  }

  cout << count << endl;
  return 0;
}