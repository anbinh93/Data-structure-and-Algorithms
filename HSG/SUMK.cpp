#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
	long n, k, p;
	//freopen("Sumk.inp", "r", stdin);
	//freopen("SUMK.OUT", "w", stdout);
	cin >> n >> k;
	static long s[10000000];
	map<long, int> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> p;
		s[i] = s[i - 1] + p;
		m[s[i]] = i;
	}
	for (int i = 1; i <= n; i++)
	{
		if (m[s[i] - k] || s[i] - k == 0)
		{
			if (m[s[i] - k] < i)
			{
				cout << m[s[i] - k] + 1 << " " << i;
				return 0;
			}
		}
	}
	cout << -1;
}