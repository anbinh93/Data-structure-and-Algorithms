/*#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	//freopen("NKABD.INP", "r", stdin);
	//freopen("NKABD.OUT", "w", stdout);
	long long n, k, so = 0;
	static long long tong[1000000];
	cin >> n >> k;
	for (int i = 1; i < k; i++)
	{
		for(int j = 2 * i; j <= k; j += i)
		{
			tong[j] += i;
		}
	}
	for (int i = n; i <= k; i++)
	{
		if (tong[i] > i) so++;
	}
	cout << so;
}*/