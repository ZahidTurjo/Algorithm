#include <bits/stdc++.h>
using namespace std;
long long dp[38];
long long tribonacci(int n)
{
    if (n < 2)
    {
        return n;
    }
    if (n == 2)
    {
        return 1;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
    return dp[n];
}
int main()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;

    cout << tribonacci(n);

    return 0;
}