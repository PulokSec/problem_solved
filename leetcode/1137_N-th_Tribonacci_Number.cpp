
// https://leetcode.com/problems/n-th-tribonacci-number/
// S1: memorization

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;

int tri[N];

int getNthTribonacci(int n)
{
  if (n == 0)
    return 0;

  if (n == 1 || n == 2)
    return 1;

  if (tri[n] != -1)
    return tri[n];

  return tri[n] = getNthTribonacci(n - 1) + getNthTribonacci(n - 2) + getNthTribonacci(n - 3);
}

int main()
{
  int n;
  cin >> n;

  memset(tri, -1, sizeof(tri));

  cout << getNthTribonacci(n) << endl;

  return 0;
}