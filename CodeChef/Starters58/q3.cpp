#include <bits/stdc++.h>
using namespace std;

int main()
{
    int query, size, r;
    scanf("%d", &query);
    for(int q = 0; q < query; q++)
    {
        scanf("%d", &size);
        int max_count = INT_MIN;
        unordered_map<int, int> hash;
        for(int i = 0; i < size; i++)
        {
            scanf("%d", &r);
            hash[r] += 1;
            max_count = max(max_Count, hash[r]);
        }
        printf("%d\n", size - max_count);
    }
    return 0;
}
