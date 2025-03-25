#include <bits/stdc++.h>
using namespace std;

int countSubsequences(string &s, string &t) {
    int len_s = s.size(), len_t = t.size();

    // DP array initialized to 0
    vector<long long> dp(len_t + 1, 0);
    
    // Base case: empty t is a subsequence of any prefix of s
    dp[0] = 1;

    // Iterate over s from left to right
    for (char ch : s) {
        // Traverse dp array **backward** to prevent overwriting
        for (int i = len_t; i > 0; i--) {
            if (t[i - 1] == ch) {
                dp[i] += dp[i - 1];
            }
        }
    }

    return dp[len_t];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--) {
        string s, t;
        cin >> s >> t;
        cout << countSubsequences(s, t) << "\n";
    }

    return 0;
}
