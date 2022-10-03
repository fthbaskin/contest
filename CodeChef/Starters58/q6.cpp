#include <bits/stdc++.h>
using namespace std;

bool iseq(int a, int b)
{
    if(a == 1 || b == 1)
        return false;
    if(a < b)
        swap(a, b);
    if(a % b != 0)
        return false;
    int c = a / b;
    if(c == 1)
        return true;
    return iseq(c, b);  
}

int main()
{
    int query;
    scanf("%d", &query);
    for(int q = 0; q < query; q++)
    {
        int a, b;
        scanf("%d %d", &a, &b);           
        if(iseq(a,b))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }    
    }
    return 0;
}
