#include <bits/stdc++.h>
using namespace std;

struct pairComp
{
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return (a.second - a.first) > (b.second - b.first);
    }
};

int main()
{
    int n, k, L, Q;
    cin >> n >> k >> L >> Q;
    vector<int> peak(n + 1, L);
    vector<pair<int, int>> crop(Q, {0, 0});
    int a, b;
    for (int i = 0; i < Q; i++)
    {
        scanf("%d %d", &a, &b);
        if (a > b)
            swap(a, b);
        crop[i] = {a, b};
    }
    sort(crop.begin(), crop.end(), pairComp());
    for (auto x : crop)
    {
        a = x.first;
        b = x.second;
        int hl = min(peak[a], peak[b]);
        for (int i = a + 1; i < b; i++)
        {
            if (peak[i] >= hl)
            {
                peak[i] = hl - 1;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", peak[i]);
    }
    return 0;
}
