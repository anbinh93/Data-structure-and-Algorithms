//#include<iostream>
//using namespace std;
//static bool a[31][31];
//static bool b[31];
//static long x[31];
//bool td = false;
//long p, q, n;
//void dq(long u)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		if ((a[x[u - 1]][i] == 1) && (b[i] == false))
//		{
//			x[u] = i; b[i] = true;
//			if (x[u] == q)
//			{
//				td = true;
//				for (int j = 1; j <= u; j++)
//				{
//					cout << x[j] << " ";
//				}
//				cout << endl;
//			}
//			else dq(u + 1);
//			b[i] = false;
//		}
//	}
//}
//int main()
//{
//	cin >> n >> p >> q;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	x[1] = p;
//	b[p] = 1;
//	dq(2);
//	if (!td)cout << -1;
//}