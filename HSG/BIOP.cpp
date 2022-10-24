#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	long n, giam = 0, tang = 0;
	static long a[1000060];
	static long b[1000090];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		b[i] = a[i];
	} 
	sort(b, b + n);
	for(int p = 0; p < n; p++)
	{		
		giam = lower_bound(b, b + n, a[p]) - b;
		tang = upper_bound(b, b + n, a[p]) - b;
		cout << giam << " " << n - tang << endl;		
	}
}