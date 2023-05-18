// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     int perfectSquares(int n) {
//         vector<int> res(n + 1, 0);
//         res[1] = 1;
//         for(int i = 2; i < res.size(); ++i)
//         {   
//             int minnum = INT_MAX;
//             for(int j = 1; j * j <= i; ++j)
//             {
//                 minnum = min(minnum, res[i - j * j] + 1);
//             }
//             res[i] = minnum;
//         }
//         return res[n];
        
//     }
// };

// int main()
// {
//     int n;
//     Solution s;

//     cin >> n;

//     int res = s.perfectSquares(n);
//     cout << res << " ";

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int perfectSquaresUtil(int n, vector<int>& memo) {
        if (n == 0)
            return 0;
        if (memo[n] != -1)
            return memo[n];
        
        int minnum = INT_MAX;
        for (int i = 1; i * i <= n; ++i) {
            minnum = min(minnum, perfectSquaresUtil(n - i * i, memo) + 1);
        }
        
        memo[n] = minnum;
        return minnum;
    }

    int perfectSquares(int n) {
        vector<int> memo(n + 1, -1);
        return perfectSquaresUtil(n, memo);
    }
};

int main() {
    int n;
    Solution s;

    cin >> n;

    int res = s.perfectSquares(n);
    cout << res << " ";

    return 0;
}
