//#include<iostream>
//using namespace std;
//int n, k;
//long tong[1000], dem = 0;
//int a[30], b[30];
//void dq(int p)
//{
//	for (int i = 0; i <= 1; i++)
//	{
//		tong[p] = a[p] * i + tong[p-1];
//		if (p == n)
//		{
//			if (tong[p] == k)
//			{
//				dem++;
//			}
//		}
//		else dq(p + 1);
//	}
//}
//int main()
//{
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	dq(1);
//	cout << dem;
//}