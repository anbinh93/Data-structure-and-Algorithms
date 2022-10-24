#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen("CAMPING.INP", "r", stdin);
    freopen("CAMPING.OUT", "w", stdout);
	long long l, n, k, khoangCachVTDau = 0, viTriTraiCu = 0, khoangCachLonNhat = -1;
	bool viTriCuoiCungDaDuocCam = false;
	bool viTriDauTienDaDuocCam = false;
	static long long a[1000000];
	cin >> l >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i]; 
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0) viTriDauTienDaDuocCam = true;
		if (viTriDauTienDaDuocCam) khoangCachVTDau = a[i];
		if (a[i] != viTriTraiCu)
		{
			khoangCachLonNhat = (a[i] - viTriTraiCu > khoangCachLonNhat) ? a[i] - viTriTraiCu : khoangCachLonNhat;
		}
		if (a[i] == l)
		{
			viTriCuoiCungDaDuocCam = true;
		}
		viTriTraiCu = a[i];
	}
	if (!viTriCuoiCungDaDuocCam && l - viTriTraiCu > khoangCachLonNhat)
	{
		cout << l - viTriTraiCu;
		return 0;
	}
	if (!viTriDauTienDaDuocCam && khoangCachVTDau > khoangCachLonNhat)
	{
		cout << khoangCachVTDau;
		return 0;
	}
	cout << khoangCachLonNhat / 2;
}