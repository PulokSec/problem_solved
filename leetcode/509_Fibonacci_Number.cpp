// https://leetcode.com/problems/fibonacci-number/
// S1: memorization

#include <bits/stdc++.h>
using namespace std;

const int N = 101;

class Solution
{
public:
    int fibo(int n, vector<int> &dp)
    {
        if (n == 0 || n == 1)
            return n;

        if (dp[n] != -1)
            return dp[n];

        return dp[n] = fibo(n - 1, dp) + fibo(n - 2, dp);
    }

    int fib(int n)
    {
        vector<int> dp(n + 1, -1);
        return fibo(n, dp);
    }
};
int main()
{
    int n;
    Solution s;

    cin >> n;

    int res = s.fib(n);
    cout << res << " ";

    return 0;
}

// S2: tabulation

// Time Complexity: O(N)
// Space Complexity: O(N)

class Solution {
public:
    int fib(int n) {
        vector<int> dp(n+2, 0);
        dp[0] = 0;
        dp[1] = 1;

        for(int i=2;i<=n;i++) {
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[n];
    }
};