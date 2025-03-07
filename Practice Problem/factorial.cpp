#include <bits/stdc++.h>
using namespace std;
long long factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n* factorial(n - 1);
    
}
int main()
{
    int c;
    cin >> c;
    cout << factorial(c) << endl;

    return 0;
}