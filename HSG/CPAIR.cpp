#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	//freopen("CPAIR.INP", "r", stdin);
	//freopen("CPAIR.OUT", "w", stdout);
	long long n, k, so_cach = 0, p, dem = 1, vi_tri;
	static long long a[10000000];
	static long long b[10000000];
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> p;
		a[p] += 1;
		b[i] = p;
	}
	for (int i = 1; i <= n; i++)
	{
		cout << k << " " << b[i] << " " << a[k - b[i]] << '\n';
		if (a[k - b[i]] != 0)
		{
			so_cach += b[i] * a[b[i]];
		}
	}
	cout << so_cach / 2;
}