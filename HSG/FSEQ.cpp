/*#include <iostream>
using namespace std;
int main()
{
	freopen("FSEQ.INP", "r", stdin);
	freopen("FSEQ.OUT", "w", stdout);
	static int a[1000000];
	long long n, tong = 0, soChan = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] % 2 == 0)soChan++;
		if (i % 2 != 0)tong += a[i];
	}
	for(int i = n - 1; i >= 0; i--)
	{
		cout << a[i] << " ";
	}
	cout << endl << tong << endl << soChan;
}*/