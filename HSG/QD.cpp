//#include<iostream>
//#include<algorithm>
//#include<map>
//using namespace std;
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
//	//freopen("QD.INP", "r", stdin);
//	//freopen("QD.OUT", "w", stdout);
//	long long n, k, k1, ketQua = 0;
//	cin >> n;
//	static long long a[1000000];
//	map<long long, int> m;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		m[a[i]] = 1;
//	}
//	for (int i = n; i => 1; i--)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (m[a[i] - a[j]] && a[j] != a[i] - [j])ketQua += 1;
//		}
//	}
//	cout << ketQua;
//}