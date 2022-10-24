//#include<iostream>
//using namespace std;
//long n, dem = 1; 
//static long a[10000000];
//static bool dd[10000000];
//void DCMNQ(long p)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		a[p] = i;
//		if (p == n)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				if (!dd[a[j]])
//				{
//					dd[a[j]] = true;
//				}
//				else 
//				{
//					memset(dd + 1, false, n + 1);
//					return; 
//				}
//			}
//			for (int j = 1; j <= n; j++)
//			{
//				cout << a[j];
//			}
//			cout << '\n';
//		}
//		else DCMNQ(p + 1);
//	}
//}
//int main()
//{
//    //freopen("BINSTR.INP", "r", stdin);
//	//freopen("BINSTR.OUT", "w", stdout);
//	cin >> n;
//	DCMNQ(1);
//}