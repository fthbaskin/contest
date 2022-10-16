#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, r;
    int c = 0;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &r);
        v.push_back(r);        
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++)
    {
        if(v[i] == i + 1)
        {
            c += 1;
        }
        else
        {
            break;
        }
    }
    cout << c;
    return 0;
}
