/*#include <iostream>
#include <algorithm>
using namespace std;
static long long s[10000000];
bool luatSoSanh(long long x, long long y)
{
	return (s[x] < s[y] || (s[x] == s[y] && x < y));
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	//freopen("SZERO.INP", "r", stdin);
	//freopen("SZERO.OUT", "w", stdout);
	long long n, j = 0, l = 0, vtnn = 0, vtln = 0, doDai = 0;
	cin >> n;
	static long long a[10000000];
	static long long cs[10000000];
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		s[i] = s[i - 1] + a[i];//9 || 2 7 5 -3 -2 4 -9 -2 1 
		cs[i] = i;
	}
	sort(cs + 1, cs + n + 1, luatSoSanh);
	long long k = s[cs[1]];
	for(int i = 2; i <= n; i++)
	{
		if(s[cs[i]] == k)
		{
			if (vtnn > cs[i]) vtnn = cs[i];
			if (vtln < cs[i]) vtln = cs[i];
		}
		else
		{
			if(vtln - vtnn + 1 > doDai)
			{
				l = vtln;
				j = vtnn;				
				doDai = vtln - vtnn + 1;
			}
			else 
			{
				j = cs[i] - 1;
			}
			k = s[cs[i]];
		}
	}
	cout << j << " " << l;
}*/