#include<iostream>
#include<algorithm>
using namespace std;
#pragma region de quy
//long n, k, tong = 0;
//static long a[1000000];
//static long s[1000000];
//static long don[1000000];
//void dq(long p)
//{
//	for (int i = 0; i <= 1; i++)
//	{
//		s[p] = i;
//		tong += s[p] * a[p];
//		//cout << tong << " " << p << " " << a[p] << " " << i << endl;
//		if (tong == k)
//		{
//			cout << "YES" << endl;
//			for (int j = 1; j <= n; j++)
//			{
//				if (s[j])cout << j << " ";
//			}
//			exit(0);
//		}
//		if (tong > k || p == n || don[n] - don[p] + tong < k)
//		{
//			tong -= s[p] * a[p];
//			s[p] = 0;
//			continue;
//		}
//		else dq(p + 1);
//		tong -= s[p] * a[p];
//		s[p] = 0;
//	}
//}
//int main()
//{
//	freopen("SUBSETSUM.INP", "r", stdin);
//    freopen("SUBSETSUM.OUT", "w", stdout);
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		don[i] = don[i - 1] + a[i];
//	}
//	dq(1);
//	cout << "NO";
//}
#pragma endregion
#pragma region quy hoach dong
int main()
{
	//freopen("SUBSETSUM.INP", "r", stdin);
	//freopen("SUBSETSUM.OUT", "w", stdout);
	long n, k, tam = 0, tong = 0;
	static long f[1000][1000];
	static long a[1000000];
	static long kq[1000000];
	f[0][0] = true;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		tong += a[i];
	}
	cout << tong;
	if (k > tong)
	{
		cout << "NO"; return 0;
	}
	for (int j = 0; j <= k; j++)
	{
		for (int i = 1; i <= n; i++)
		{
			if (a[i] > j)
			{
				f[i][j] = f[i - 1][j];
			}
			else f[i][j] = f[i - 1][j] || f[i - 1][j - a[i]];
		}
	}
	long j = k, i = n;
	while (j > 0)
	{
		if (f[i][j] == f[i - 1][j])i--;
		else
		{
			j -= a[i];
			kq[++tam] = i--;
		}
	}
	cout << "YES" << endl;
	for (int p = tam; p != 0; p--)
	{
		cout << kq[p] << " ";
	}
}
#pragma endregion

