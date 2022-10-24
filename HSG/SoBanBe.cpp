//#include<iostream>;
//using namespace std;
//long tongUoc(long n)
//{
//	long tong = 0;
//	for (int i = 1; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			tong += i;
//		}
//	}
//	return tong;
//}
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
//	long a, b;
//	cin >> a >> b;
//	static long m[10000000];
//	for (int i = a; i <= b; i++)
//	{
//		if (m[tongUoc(i)] == 0)
//		{
//			m[tongUoc(i)] = i;
//		}
//	}
//	for (int i = a; i <= b; i++)
//	{
//		if (m[i] != 0 && m[m[i]] == i)
//		{
//			cout << i << " " << m[i] <<'\n';
//		}
//	}
//}