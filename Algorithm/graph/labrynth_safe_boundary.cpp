#include <bits/stdc++.h>
using namespace std;
const int N = 2002;

int maze[N][N], visited[N][N];
int level[N][N];
int n, m;

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
string direction[] = {"L", "R", "D", "U"};

bool is_inside(pair<int, int> coord)
{
    int x = coord.first;
    int y = coord.second;

    if (x >= 0 && x < n && y >= 0 && y < m)
    {
        return true;
    }
    return false;
}

bool is_safe(pair<int, int> coord)
{
    int x = coord.first;
    int y = coord.second;
    if (((x >= 0 && x < n) || y == 0 || y == m - 1) && maze[x][y] != -1)
    {
        // reached boundary cell
        return true;
    }
    return false;
}

void bfs(pair<int, int> src)
{

    queue<pair<int, int>> q;
    visited[src.first][src.second] = 1;
    level[src.first][src.second] = 0;

    q.push(src);

    while (!q.empty())
    {
        pair<int, int> head = q.front();
        q.pop();
        int x = head.first;
        int y = head.second;

        for (int i = 0; i < 4; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];

            pair<int, int> adj_node = {new_x, new_y};

            if (is_inside(adj_node) && visited[new_x][new_y] == 0 && maze[new_x][new_y] != -1)
            {
                visited[new_x][new_y] = 1;
                level[new_x][new_y] = level[x][y] + 1;
                q.push(adj_node);
            }
        }
    }
}

void get_path(pair<int, int> src, pair<int, int> dst)
{

    if (level[dst.first][dst.second] == -1)
    {
        cout << "NO" << endl;
    }
    else
    {
        string path = "";
        pair<int, int> cur = dst;
        while (cur != src)
        {
            for (int i = 0; i < 4; i++)
            {
                int new_x = cur.first + dx[i];
                int new_y = cur.second + dy[i];

                pair<int, int> adj_node = {new_x, new_y};

                if (is_inside(adj_node) && level[new_x][new_y] == level[cur.first][cur.second] - 1)
                {
                    path = direction[i] + path;
                    cur = adj_node;
                    break;
                }
            }
        }
        cout << "YES" << endl;
        cout << level[dst.first][dst.second] << endl;
        cout << path << endl;
    }
}

int main()
{
    cin >> n >> m;

    pair<int, int> src, dst;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            level[i][j] = -1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        for (int j = 0; j < m; j++)
        {
            if (input[j] == '#')
            {
                maze[i][j] = -1;
            }
            else if (input[j] == 'A')
            {
                src = {i, j};
            }
            else if (input[j] == 'M')
            {
                maze[i][j] = -1;
            }
        }
    }

    bfs(src);

    bool found_safe_boundary = false;
    for (int i = 0; i < n; i++)
    {
        pair<int, int> curr_node = {i, 0};
        if (visited[i][0] == 1 && is_safe(curr_node))
        {
            dst = curr_node;
            found_safe_boundary = true;
            break;
        }
        curr_node = {i, m - 1};
        if (visited[i][m - 1] == 1 && is_safe(curr_node))
        {
            dst = curr_node;
            found_safe_boundary = true;
            break;
        }
    }

    for (int j = 0; j < m; j++)
    {
        pair<int, int> curr_node = {0, j};
        if (visited[0][j] == 1 && is_safe(curr_node))
        {
            dst = curr_node;
            found_safe_boundary = true;
            break;
        }
        curr_node = {n - 1, j};
        if (visited[n - 1][j] == 1 && is_safe(curr_node))
        {
            dst = curr_node;
            found_safe_boundary = true;
            break;
        }
    }

    if (found_safe_boundary)
    {
        get_path(src, dst);
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}