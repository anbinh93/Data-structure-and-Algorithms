//#include<iostream>
//using namespace std;
//long s, giamKhao, baiToan;
//static int a[21][21];
//static int b[21];
//long tong = 0;
//void dq(int p)
//{
//	for (int i = 1; i <= giamKhao; i++)
//	{
//		if (a[i][p] >= b[p - 1] && tong + a[i][p] <= s)
//		{
//			tong += a[i][p];
//			b[p] = a[i][p];
//			if (p == baiToan)
//			{
//				if (tong == s)
//				{
//					cout << "YES" << endl;
//					for (int j = 1; j <= baiToan; j++)
//					{
//						cout << b[j] << " ";
//					}
//					exit(0);
//				}
//			}
//			else dq(p + 1);
//			tong += a[i][p];
//		}
//	}
//}
//int main()
//{	
//	//freopen("V8SCORE.INP", "r", stdin);
//	//freopen("V8SCORE.OUT", "w", stdout);
//	cin >> s >> baiToan >> giamKhao;
//	for (int j = 1; j <= baiToan; j++)
//	{
//		for (int i = 1; i <= giamKhao; i++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	dq(1);
//	cout << "NO";
//}