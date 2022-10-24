//#include<iostream>
//#include<stack>
//#include<cstring>
//using namespace std;
//
//static long a[10000000];
//static long f[10000000];
//static long tv[10000000];
//stack<long> s;
//long n, kq = -10e8, cuoi;
//
//int main()
//{
//	//freopen("LIQ.INP", "r", stdin);
//	//freopen("LIQ.OUT", "w", stdout);
//	cin >> n;
//	for (int i = 1; i <= 10e6; i++)
//		f[i] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			if (a[j] < a[i] && f[j] + 1 > f[i])
//			{
//				f[i] = f[j] + 1;
//				tv[i] = j;
//			}
//		}
//		if (kq < f[i])
//		{
//			kq = f[i];
//			cuoi = i;
//		}
//	}
//	cout << kq << endl;
//	s.push(cuoi);
//	while(tv[cuoi] != 0)
//	{
//		s.push(tv[cuoi]);
//		cuoi = s.top();
//	}
//	for (int i = 1; i <= kq; i++)
//	{
//		cout << s.top() << " ";
//		s.pop();
//	}
//}