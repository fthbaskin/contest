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
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%lld", fastExpMod(2, n - 1));
    return 0;
}