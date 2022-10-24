#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("SD1EQ.INP", "r", stdin);
	//freopen("SD1EQ.OUT", "w", stdout);
	long long n, tong = -1e15, k;
	static long long a[10000000];
	static long long s[10000000];
	static long long min[10000000];
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		s[i] = s[i - 1] + a[i];
		k = min[i - 1];
		if (s[i] < s[k])
			min[i] = i;
		else
			min[i] = k;
		if (s[i] - s[k] > tong)
			tong = s[i] - s[k];
	}
	cout << tong;
}