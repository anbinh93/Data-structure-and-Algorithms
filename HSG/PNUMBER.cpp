//#include <iostream>
//#include <cmath>
//using namespace std;
//bool ASK(long long n)
//{
//	if (n == 2 || n == 3) return true;
//	if (n % 2 == 0 || n % 3 == 0 || n == 1) return false;
//	for (int i = 5; i * i <= n; i = i + 6)
//		if (n % i == 0 || n % (i + 2) == 0) return false;
//	return true;
//}
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
//	freopen("PNUMBER.INP", "r", stdin);
//	freopen("PNUMBER.OUT", "w", stdout);
//	long long a, b;
//	cin >> a >> b;
//	for (int i = a; i <= b; i++)
//	{
//		if (ASK(i))
//		{
//			cout << i << '\n';
//		}
//	}
//}