#include<bits/stdc++.h>
using namespace std;


int main() {
    int t, a1, a2, a3, a4;
    cin >> t;
    while (t--) {
        cin >> a1 >> a2 >> a3 >> a4;
        int type1 = min(a1, a3);
        int type2 = min(a2, a4);
        int balance = type1 - min(type1 + type2, a1 + a2 + a3 + a4 - type1 - type2);
        if (balance >= 0) {
            int remaining1 = a1 - type1;
            int remaining3 = a3 - type1;
            int remaining2 = max(a2 - balance, 0);
            int remaining4 = max(a4 - balance, 0);
            int max_jokes = type1 + type2 + balance + min(remaining1, remaining3) + min(remaining2, remaining4);
            cout << max_jokes << endl;
        } else {
            int remaining2 = max(a2 - type2, 0);
            int remaining3 = max(a3 - abs(balance), 0);
            int remaining4 = max(a4 - abs(balance), 0);
            int max_jokes = type2 + abs(balance) + min(a1, a3) + min(remaining2, remaining4) + min(a1 - min(a1, a3), remaining3);
            cout << max_jokes << endl;
        }
    }
    return 0;
}
