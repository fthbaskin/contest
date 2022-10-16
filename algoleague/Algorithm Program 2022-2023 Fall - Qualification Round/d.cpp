#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s1;
    string s2;
    cin >> s1 >> s2;
    int comPtr = 0;
    while(comPtr < s1.size() && comPtr < s2.size())
    {
        if(s1[comPtr] != s2[comPtr])
        {
            break;
        }
        comPtr += 1;
    }
    for(int i = comPtr; i < s2.size(); i++)
    {
        if(s2[i] != 'C' && s2[i] != 'D')
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
