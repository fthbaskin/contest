#include <bits/stdc++.h>
using namespace std;
#define MOD 1007

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 2;
        return 0;
    }
    if (n == 2)
    {
        cout << 3;
        return 0;
    }
    if (n == 3)
    {
        cout << 4;
        return 0;
    }
    vector<int> dp(n + 1);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 2] + dp[i - 3];
        dp[i] %= MOD;
    }
    int res = dp[n] + dp[n - 1];
    res %= MOD;
    cout << res;
    return 0;
}
