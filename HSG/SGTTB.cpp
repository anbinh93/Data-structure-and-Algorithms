//#include<iostream>
//using namespace std;
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
//	long long n, k;
//	cin >> n >> k;
//	static long long a[1000000];
//	a[1] = a[2] = 1;
//	for (int i = 3; i <= n; i++)
//	{
//		a[i] = a[i - 1] + a[i - 2];
//	}
//	cout << a[k];
//}