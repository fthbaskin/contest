#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    long long r;
    long long MAX = 0;
    long long sum = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%lld", &r);
        MAX = max(r, MAX);
        sum += r;
    }
    if(MAX > sum - MAX)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }
	return 0;
}
