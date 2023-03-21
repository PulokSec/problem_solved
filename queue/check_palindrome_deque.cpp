#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string input)
{
  int n = input.size();
  deque<char> dq;
  for (int i = 0; i < n; i++)
  {
    dq.push_back(input[i]);
  }
  while (!dq.empty())
  {
    if (dq.size() == 1)
    {
      dq.pop_front();
      return true;
    }
    if (dq.front() == dq.back())
    {
      dq.pop_front();
      dq.pop_back();
    }
    else
    {
      return false;
    }
  }
  return true;
}

int main()
{
  string str;
  cin >> str;
  if (isPalindrome(str))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}