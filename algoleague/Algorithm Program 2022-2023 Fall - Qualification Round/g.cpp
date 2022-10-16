#include <bits/stdc++.h>
using namespace std;

struct pairComp
{
    bool operator ()(pair<long long, long long> a, pair<long long, long long> b)
    {
        if(a.first != b.first)
            return a.first < b.first;
        return a.second < b.second;
    }
};

int main() 
{
	int n;
    cin >> n;
    vector<pair<long long, long long>> vect;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        vect.push_back({a, a + b});
    }
    sort(vect.begin(), vect.end(), pairComp());
    long long happy = INT_MIN;
    long long prL = INT_MIN;
    long long prR = INT_MIN;
    for(auto x : vect)
    {
        if(x.first > prR)
        {
            prL = x.first;
            prR = x.second;
        }
        if(x.first <= prR && x.second >= prR)
        {
            prR = x.second;
        }
        happy = max(happy, prR - prL);
    }
    cout << happy;
    return 0;
}
