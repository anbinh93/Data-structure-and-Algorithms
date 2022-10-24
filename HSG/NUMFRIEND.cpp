//#include<iostream>
//#include<math.h>
//using namespace std;
//long long s(long long a)
//{
//	int t = 0;
//	for (int i = 1; i <= sqrt(a); i++)
//	{
//		if (!(a % i))
//		{
//			t += (i == a / i) ? i : i + a / i;
//		}
//	}
//	return t - a;
//}
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
//	freopen("NUMFRIEND.INP", "r", stdin);
//	freopen("NUMFRIEND.OUT", "w", stdout);
//	long long n, b, i, dem = 0;
//	while (cin >> n)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			b = s(i);
//			if (i < b && i == s(b) && b <= n) dem++; 
//		}
//		cout << dem << '\n'; dem = 0;		
//	}
//}