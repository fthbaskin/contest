#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> nmb(6, 0);
    string pat1 = "abc";
    string pat2 = "acb";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != pat1[(i + 0) % 3])
            nmb[0] += 1;
        if (s[i] != pat1[(i + 1) % 3])
            nmb[1] += 1;
        if (s[i] != pat1[(i + 2) % 3])
            nmb[2] += 1;
        if (s[i] != pat2[(i + 0) % 3])
            nmb[3] += 1;
        if (s[i] != pat2[(i + 1) % 3])
            nmb[4] += 1;
        if (s[i] != pat2[(i + 2) % 3])
            nmb[5] += 1;
    }
    int min_change = INT_MAX;
    for (int x : nmb)
    {
        min_change = min(min_change, x);
    }
    cout << min_change << endl;
    return 0;
}
