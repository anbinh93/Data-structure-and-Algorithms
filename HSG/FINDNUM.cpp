#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	long long n, tong = 0;
	bool co_khong = false;
	static char a[10000000];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		tong += a[i];
		if (a[i] == 0) co_khong = true;
	}
	sort(a, a + n, greater<int>());
	if (co_khong && tong % 3 == 0)
	{
		for (int i = 0; i < n; i++)
		{
			cout << a[i];
		}
	}
}