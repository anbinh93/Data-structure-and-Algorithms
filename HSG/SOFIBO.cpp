/*#include <iostream>
#include <algorithm>
using namespace std;
bool SCP(long long n)
{
	long long p = sqrt(n);
	return (p * p == n);
}
bool FIBO(long long n)
{
	if (SCP(5 * n * n - 4) || SCP(5 * n * n + 4)) return true;
	return false;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	//freopen("DEM.INP", "r", stdin);
	//freopen("DEM.INP", "r", stdin);
	long long n, k = 0, s;
	static long long a[100000000];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (FIBO(a[i])) k++;
	}
	cout << k;
}*/