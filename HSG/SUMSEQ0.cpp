#include <iostream>
#include <map>
#include <stdio.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("SUMSEQ0.INP", "r", stdin);
	freopen("SUMSEQ0.OUT", "w", stdout);
	map<long, long> um;
	static long long a[1000000];
	long long dap_an = 0, tam = 0, n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++)
	{
		tam += a[i];
		if (tam == 0)
			dap_an++;
		if (um.find(tam - 0) != um.end())
			dap_an += (um[tam - 0]);
		um[tam]++;
	}
	cout << dap_an;
}