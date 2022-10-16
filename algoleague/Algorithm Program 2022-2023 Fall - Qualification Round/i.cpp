#include <bits/stdc++.h>
#define MOD 1007
using namespace std;

long long fastExpMod(long long x, long long p)
{
    long long res = 1;
    while (p > 0)
    {
        if (p & 1)
        {
            res = res * x;
            res = res % MOD;
        }
        x = x * x;
        x = x % MOD;
        p = p >> 1;
    }
    return res;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if (n % m != 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << fastExpMod(23, m) << endl;
    }
    return 0;
}
