#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adjMatrixToList(vector<vector<int>> adjMatrix, int n)
{
  vector<vector<int>> adj_list(n);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (adjMatrix[i][j] == 1)
      {
        adj_list[i].push_back(j);
      }
    }
  }
  return adj_list;
}

int main()
{
  int n, val;
  cin >> n;
  vector<vector<int>> adjMatrix;
  for (int i = 0; i < n; i++)
  {
    vector<int> temp;
    for (int j = 0; j < n; j++)
    {
      cin >> val;
      temp.push_back(val);
    }
    adjMatrix.push_back(temp);
    temp.clear();
  }

  vector<vector<int>> adj_list = adjMatrixToList(adjMatrix, n);

  for (int i = 0; i < n; i++)
  {
    cout << i << ": ";
    for (int j = 0; j < adj_list[i].size(); j++)
    {
      cout << adj_list[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}