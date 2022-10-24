/*#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("SORTF.INP", "r", stdin);
	freopen("SORTF.OUT", "w", stdout);
	long long n, k, a = 0, b = 0;
	static long long chan[10000000];
	static long long le[10000000];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		if (k % 2 != 0)
		{
			le[b] = k; b++;
		}
		else
		{
			chan[a] = k; a++;
		}
	}
	sort(chan, chan + a);
	sort(le, le + b, greater<int>());
	for (int i = 0; i < a; i++)
	{
		cout << chan[i] << " ";
	}
	for (int i = 0; i < b; i++)
	{
		cout << le[i] << " ";
	}
}*/