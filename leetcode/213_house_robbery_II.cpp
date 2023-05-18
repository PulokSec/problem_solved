// Title: House Robbery II tabulation
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int max_rob(vector<int> &money, int start, int end)
  {
    int n2 = 0;
    int n1 = 0;

    for (int i = start; i < end; i++)
    {
      int current = max(n1, n2 + money[i]);
      n2 = n1;
      n1 = current;
    }
    return n1;
  }

  int rob(vector<int> &nums)
  {
    int n = nums.size();
    if (n == 0)
      return 0;
    if (n == 1)
      return nums[0];
    if (n == 2)
      return max(nums[0], nums[1]);

    int m1 = max_rob(nums, 0, n - 1);
    int m2 = max_rob(nums, 1, n);

    return max(m1, m2);
  }
};

// Title: House Robbery II memorization

int	main()
{ 
  int n;
  Solution s;
  vector<int> v = {1, 2, 3, 1};
  n = s.rob(v);

  cout << n << endl;
  return 0;
}

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int max_rob(vector<int> &money, int start, int end, vector<int> &memo)
  {
    if (start >= end)
      return 0;

    if (memo[start] != -1)
      return memo[start];

    int n2 = max_rob(money, start + 2, end, memo);
    int n1 = max_rob(money, start + 1, end, memo);

    int current = max(n1, n2 + money[start]);
    memo[start] = current;
    return current;
  }

  int rob(vector<int> &nums)
  {
    int n = nums.size();
    if (n == 0)
      return 0;
    if (n == 1)
      return nums[0];
    if (n == 2)
      return max(nums[0], nums[1]);

    vector<int> memo(n, -1);
    int m1 = max_rob(nums, 0, n - 1, memo);
    int m2 = max_rob(nums, 1, n, memo);

    return max(m1, m2);
  }
};

int main()
{
  int n;
  Solution s;
  vector<int> v = {1, 2, 3, 1};
  n = s.rob(v);

  cout << n << endl;
  return 0;
}
