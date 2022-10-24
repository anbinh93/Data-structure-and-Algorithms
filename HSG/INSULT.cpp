#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("INSULT.INP", "r", stdin);
	freopen("INSULT.OUT", "w", stdout);
	long long n, tong = 0, k = 0;
	cin >> n;
	static long long a[1000000];
	static long long s[1000000];
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		s[i] = s[i - 1] + a[i];
	}
	sort(a + 1, a + n + 1);
	for(int i = 0; i <= n / 2; i++)
	{
		if (i == 0)
		{
			tong = s[n] - s[i]; 
			continue;// 1 4 5 7
		}
		tong += a[n - k] - a[i];
		k++;
	}
	cout << tong;
}