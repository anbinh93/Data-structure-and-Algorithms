#include<iostream>
#include<algorithm>
using namespace std;
static long long a[100000000];
long long n;
bool cmp(long long x, long long y)
{
	return (x > y || find(a + 1, a + n + 1, x) - a + 1 < find(a + 1, a + n + 1, y) - a + 1);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i = 1; i <= n; i++)
	{
		cout << a[i];
	}
}