#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
struct bang
{
	long long chiSo; long long thoiGian;
};
bool ss(bang b1, bang b2)
{
	if (b1.thoiGian < b2.thoiGian)return true;
	return false;
}
int main()
{
	ios_base::sync_with_stdio(0);
	long long n, k, dem = 0, tong = 0;
	static bang a[10000000];
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> k;
		a[i] = { i, k };
	}
	sort(a + 1, a + n + 1, ss);
	for (int i = 1; i <= n; i++)
	{
		dem += a[i].thoiGian; tong += dem;
		cout << a[i].chiSo << " " << dem << '\n';
	}
	cout << tong;
}