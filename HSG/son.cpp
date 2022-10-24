//#include<iostream>
//using namespace std;
//long n, m, dem = 0;
//int a[1000000];
//int dd[1000000];
//void dq(int p)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		if (!dd[i])
//		{
//			a[p] = i;
//			dd[i] = true;
//			if (p == m)
//			{
//				dem++;
//				for (int j = 1; j <= m; j++)
//				{
//					cout << a[j] << " ";
//				}
//				cout << endl;
//			}
//			else dq(p + 1);
//			dd[i] = false;
//		}
//	}
//}
//int main()
//{
//	cin >> n >> m;
//	dq(1);
//	cout << dem;
//}