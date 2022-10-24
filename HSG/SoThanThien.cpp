//#include <iostream>
//using namespace std;
//long long SDX(long long n) 
//{
//	long long soDoiXung = 0;
//	while (n) 
//	{
//		soDoiXung = soDoiXung * 10 + n % 10;
//		n /= 10;
//	}
//	return soDoiXung;
//}
//long long UCLN(long long a, long long b)
//{
//	while (b) 
//	{
//		long long t = b;
//		b = a % b;
//		a = t;
//	}
//	return a;
//}
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
//	long long n, k, ketQua = 0;
//	cin >> n >> k;
//	for (int i = n; i <= k; i++)
//	{
//		if (UCLN(i, SDX(i)) == 1) ketQua++;
//	}
//	cout << ketQua;
//}