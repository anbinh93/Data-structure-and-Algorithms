//#include<iostream>
//#include<math.h>
//using namespace std;
//unsigned long long Power(unsigned long long a, unsigned long long n, unsigned long long m)
//{
//	if (n == 1) return a % m;
//	unsigned long long tmp = Power(a, n / 2, m) % m;
//	return (n % 2 == 0) ? tmp * tmp % m : ((tmp * tmp % m) * a) % m;
//}
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
//	freopen("POWER2.INP", "r", stdin);
//	freopen("POWER2.OUT", "w", stdout);
//	unsigned long long x, n, m;
//	while (cin >> x >> n >> m)
//	{
//		cout << Power(x, n, m) << '\n';
//	}
//}