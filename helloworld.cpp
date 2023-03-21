#include <bits/stdc++.h>

using namespace std;

string construct_string(int n, int a, int b) {
    string s(n, 'a');
    int num_chars = 0;
    for (int i = 0; i < n; i += a) {
        for (int j = i; j < i + a; j++) {
            s[j] = 'a' + num_chars;
            if (num_chars < b - 1) {
                num_chars++;
            } else {
                num_chars = 0;
            }
        }
    }
    return s;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s = construct_string(n, a, b);
        cout << s << endl;
    }
    return 0;
}
