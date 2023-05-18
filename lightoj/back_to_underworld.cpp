#include <bits/stdc++.h>
using namespace std;

#define SIZE 20005

list<int> adj[SIZE];
int color[SIZE];

enum
{
  NOT_VISITED,
  BLACK,
  RED
};

int main()
{
  int T, n, x, y, q, node;
  char ch;
  long long sum = 0;
  int max_race = 0;

  cin >> T;

  for (int t = 1; t <= T; t++)
  {
    cin >> n;

    memset(color, 0, sizeof color);
    for (int i = 0; i < SIZE; i++)
      adj[i].clear();

    for (int i = 0; i < n; i++)
    {
      cin >> x >> y;

      adj[x].push_back(y);
      adj[y].push_back(x);
    }
    max_race = 0;
    for (int i = 0; i < SIZE; i++)
    {
      if (!adj[i].empty() && color[i] == NOT_VISITED)
      {
        int black = 0, red = 0;
        queue<int> q;
        q.push(i);
        color[i] = BLACK;
        black++;

        while (!q.empty())
        {
          node = q.front();
          q.pop();

          for (list<int>::iterator it = adj[node].begin(); it != adj[node].end(); it++)
          {
            if (color[*it] == NOT_VISITED)
            {
              q.push(*it);
              if (color[node] == BLACK)
              {
                color[*it] = RED;
                red++;
              }
              else
              {
                color[*it] = BLACK;
                black++;
              }
            }
          }
        }
        max_race += max(red, black);
      }
    }
    cout << "Case " << t << ": " << max_race << endl;
  }

  return 0;
}