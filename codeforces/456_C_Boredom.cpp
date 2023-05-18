#include <bits/stdc++.h>
using namespace std;

const int N = 1000000;
int frequency[N];
long long int points[N];


int main()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int k;
    cin >> k;
    frequency[k]++;
  }

  points[0] = 0;

  for (long long int i = 1; i < N; i++)
  {
    points[i] = i * frequency[i];
    if (i - 2 >= 0){
      points[i] += points[i - 2];
    }
    if (points[i - 1] > points[i]){
      points[i] = points[i - 1];
    }
  }

  cout << points[N - 1] << endl;
  return 0;
}