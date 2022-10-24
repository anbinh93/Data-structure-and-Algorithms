 /*#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("SCTDP.INP", "r", stdin);
	freopen("SCTDP.OUT", "w", stdout);
	long long n, k = 0, p = 0;
	static long long chiSo[10000000];
	static long long giaTri[10000000];
	static long long a[10000000];
	cin >> n;
	a[0] = a[n + 1] = 10e9;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++)
	{				
		if (a[i - 1] > a[i] && a[i + 1] > a[i])
		{
			k++; 
			chiSo[p] = i;
			giaTri[p] = a[i];
			p++;
		}
	}
	cout << k << "\n";
	if(k == 0)
	{
		cout << 0 << "\n" << 0;
	}
	else
	{
		sort(chiSo, chiSo + p);
		for (int i = 0; i < p; i++)
		{
			cout << chiSo[i] << " ";
		}
		cout << "\n";
		sort(giaTri, giaTri + p);
		for (int i = 0; i < p; i++)
		{
			cout << giaTri[i] << " ";
		}
	}
}*/