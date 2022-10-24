/*#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//freopen("SXDS.INP", "r", stdin);
	//freopen("SXDS.OUT", "w", stdout);
	long long n, soLan = 0, k = 0;
	static long long a[10000000];
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if (a[i] % 2 != 0)
		{
			k++;
		}*	
	}
	for (int i = 1; i <= k; i++)
	{
		if (a[i] % 2 == 0)soLan++;
	}
	cout << soLan;
}*/