#include <bits/stdc++.h>
using namespace std;

int main()
{
    int query, size, r;
    scanf("%d", &query);
    for(int q = 0; q < query; q++)
    {
        scanf("%d", &size);
        int even = 0;
        for(int i = 0; i < size; i++)
        {
            scanf("%d", &r);
            if(r % 2 == 0)
            {
                even += 1;
            }
        }
        if(even == size)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n", even);
        }
    }
    return 0;
}
