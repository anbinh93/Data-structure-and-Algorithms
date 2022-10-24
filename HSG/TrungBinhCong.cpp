//#include<iostream>
//using namespace std;
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
//	long n, k, khoangCach = 0, nhoNhat = 10e9;
//	static long a[1000000];
//	static long s[1000000];
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		s[i] = s[i - 1] + a[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = i; j <= n; j++)
//		{
//			if ((s[i] - s[j]) / (i - j + 1) >= k)
//			{
//				khoangCach = (khoangCach < (i - j + 1)) ? i - j + 1 : khoangCach;
//				nhoNhat = (nhoNhat > j) ? j : nhoNhat;
//			}
//		}
//	}
//	cout << nhoNhat << "\n" << khoangCach + nhoNhat - 1;
//}
