#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
bool SCP(long n)
{
	int i = sqrt(n);	
	if (i * i == n) return true;	
	return false;
}
bool SNT(long n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (!(n % i)) return false;
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	long long n, k;
	cin >> n;
	static long a[1000000];
	map<long, int> m;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + 1, greater<int>());
	for (int i = 0; i < n; i++)
	{
		if (SNT(a[i]) && !m[a[i]])
		{
			m[a[i]] = i;
			cout << a[i] << '\n';
		}
	}
	m.clear();
	for (int i = 0; i < n; i++)
	{
		if (SCP(a[i]) && !m[a[i]])
		{
			m[a[i]] = i;
			cout << a[i] << '\n';
		}
	}
}