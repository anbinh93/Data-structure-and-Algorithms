//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//static long a[10000000];
//static long b[10000000];
//long n, m;
//long kq = 0, dem = 1;
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> b[i];
//	}
//	sort(a + 1, a + n + 1);
//	sort(b + 1, b + m + 1);
//	for (int i = 1; i <= n; i++)
//	{
//		if (a[i] <= b[dem]) 
//		{
//			kq += m - dem + 1;
//		}
//		else
//		{
//			kq += n - i + 1;
//			dem++; 
//			if (dem > m)break;
//		}
//	}
//	cout << kq;
//}