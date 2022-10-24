//#include <iostream>
//#include <map>
//using namespace std;
//long n, dem = 0;
//string s;
//static char a[10];
//static bool dd[10];
//map<string, int> m;
//void sang()
//{
//	s.clear();
//	for (int j = 0; j < n; j++)
//	{
//		if (a[j] == 0)s += 'A';
//		else s += 'B';
//	}
//}
//void dq(long p)
//{
//	for (int i = 0; i <= 1; i++)
//	{
//		if (!a[p - 1] && i == 1)
//		{
//			a[p] = i;
//		}
//		else
//		{
//			a[p] = 0;
//		}
//		if (p == n - 1)
//		{
//			sang();
//			if (!m[s])
//			{
//				dem++;
//				m[s] = 1;
//			}
//		}
//		else dq(p + 1);
//	}
//}
//int main()
//{
//	cin >> n;
//	dq(0);
//	cout << dem;
//}