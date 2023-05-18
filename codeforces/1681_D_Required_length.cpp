#include <bits/stdc++.h>

using namespace std;

long long int countDigits(long long x)
{
  long long int count = 0;
  while (x > 0)
  {
    x /= 10;
    count++;
  }
  return count;
}

int bfs(long long x, long long n)
{
  map<long long int, long long int> ops;
  queue<long long int> q;

  ops[x] = 0;
  q.push(x);

  while (!q.empty())
  {
    long long int currentX = q.front();
    q.pop();

    if (countDigits(currentX) == n)
    {
      return ops[currentX];
    }
    long long temp = currentX;
    while (temp)
    {
      long long digit = temp % 10;
      temp /= 10;

      if (ops.find(digit * currentX) == ops.end())
      {
        ops[digit * currentX] = ops[currentX] + 1;
        q.push(digit * currentX);
        ops[digit * currentX] = ops[currentX] + 1;
      }
    }
  }
  return -1;
}

int main()
{
  long long int n, x;
  cin >> n >> x;

  cout << bfs(x, n) << endl;

  return 0;
}
