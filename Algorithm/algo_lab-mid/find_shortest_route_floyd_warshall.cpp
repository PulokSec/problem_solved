#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 3;
const long long INF = 1e18;
long long dis[N][N];

int main()
{
    int n, m, q;
    cin >> n >> m >> q;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dis[i][j] = INF;
        }
    }

    for (int i = 0; i < m; i++)
    {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        dis[u][v] = min(dis[u][v], w);
        dis[v][u] = min(dis[v][u], w);
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i][i] = 0;
    }

    for (int k = 1; k <= n; k++)
    {
        for (int u = 1; u <= n; u++)
        {
            for (int v = 1; v <= n; v++)
            {
                dis[u][v] = min(dis[u][v], dis[u][k] + dis[k][v]);
            }
        }
    }
    vector<int> shortest_route_path;

    for (int i = 0; i < q; i++)
    {
        int u, v;
        cin >> u >> v;
        if (dis[u][v] == INF)
        {
            shortest_route_path.push_back(-1);
        }
        else
        {
            shortest_route_path.push_back(dis[u][v]);
        }
    }

    for (int node : shortest_route_path)
    {
        cout << node << endl;
    }
    cout << endl;
    return 0;
}