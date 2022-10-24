/*#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//freopen("DISNUM.INP", "r", stdin);
	//freopen("DISNUM.OUT", "w", stdout);
	long long n, k = 0;
	cin >> n;
	static long long a[10000000];
	//static long long b[10000000];
	/*for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if(find(begin(b), end(b), a[i]) == end(b) || (long long)find(begin(b), end(b), a[i]) == a[i])
		{
			b[k] = a[i];
			k++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		/*int dem = 0;
		for (int j = 0; j < i - 1; j++)
		{
			if (a[i] == a[j]) dem++;
		}
		if (dem == 0)k++;
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++)
	{
		if(a[k] != a[i])
		{
			a[++k] = a[i];
		}
	}
	cout << k + 1;
}*/