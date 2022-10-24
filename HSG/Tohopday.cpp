//#include<iostream>
//using namespace std;
//long k, n;
//int a[1000];
//int b[1000];
//void dq(long p)
//{
//	for (int i = a[p - 1] + 1; i <= n; i++)
//	{
//		a[p] = i;
//		if (p == k)
//		{
//			for (int j = 1; j <= k; j++)
//			{
//				cout << b[a[j]] << " ";
//			}
//			cout << endl;
//		}
//		else dq(p + 1);
//	}
//}
//int main()
//{
//	cin >> k >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> b[i];
//	}
//	dq(1);
//}