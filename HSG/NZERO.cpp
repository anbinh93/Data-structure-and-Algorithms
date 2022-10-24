//#include<iostream>
//#include<stdio.h>
//using namespace std;
//
//long n, tam;
//static unsigned long long f[100000000];
//
//unsigned long long UCLN(unsigned long long a, unsigned long long b)
//{
//	if (b == 0)
//		return a;
//	return UCLN(b, a % b);
//}
//
//unsigned long long BCNN(unsigned long long a, unsigned long long b)
//{
//	return a * b / UCLN(a, b);
//}
//
//void tinh(long p)
//{
//	for (int i = 2; i <= p; i++)
//	{
//		f[i] = BCNN(f[i - 1], i);
//	}
//}
//
//int main()
//{
//	freopen("NZERO.INP", "r", stdin);
//	freopen("NZERO.OUT", "w", stdout);
//	f[1] = 1;
//	tinh(1000000);
//	while (cin >> n)
//	{
//		if (n == 0)
//		{
//			return 0;
//		}
//		tam = f[n] % 10;
//		while (tam == 0)
//		{
//			tam = f[n] % 10;
//			f[n] /= 10;
//		}
//		cout << tam << endl;
//	}
//}