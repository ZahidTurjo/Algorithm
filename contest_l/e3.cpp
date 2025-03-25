
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> f(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 1 && a[i] <= n)
            {
                f[a[i]]++;
            }
        }

        vector<int> mis;
        int cnt = 0;

        for (int i = 1; i <= n; i++)
        {
            if (f[i] == 0)
            {
                mis.push_back(i);
            }
            else if (f[i] > 1)
            {
                cnt += (f[i] - 1);
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] < 1 || a[i] > n)
            {
                cnt++;
            }
        }

        int required = mis.size();

        if (required <= k && cnt >= required)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}