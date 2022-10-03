#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
	    int a;
	    cin >> a;
	    int b = a / 25;
	    if(a % 25)
	        b += 1;
	    cout << b << endl;
	}
	return 0;
}
