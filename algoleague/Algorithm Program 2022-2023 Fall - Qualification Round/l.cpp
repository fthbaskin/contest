#include <bits/stdc++.h>
using namespace std;

int main() 
{
    stack<char> stk;
    long long n;
    cin >> n;
    n = 2*n;
    char r;
    int count = 0;
    for(long long i = 0; i < n; i++)
    {
        scanf("%c", &r);
        if(r == ')')
            stk.pop();
        if(r == '(')
            stk.push('(');
        if(stk.size() > count)
            count = stk.size();
    }
    cout << count;
	return 0;
}
