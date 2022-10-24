//#include<iostream>
//#include<algorithm>
//#include<map>
//using namespace std;
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
//	//freopen("SEQK.INP", "r", stdin);
//	//freopen("SEQK.OUT", "w", stdout);
//	long long n, k;
//	static long long a[100000000];
//	map<long long, int> m;
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		if (m[a[i] - k]) 
//		{
//			cout << i << " " << m[a[i] - k];
//			return 0;
//		}
//		if (m[a[i] + k])
//		{
//			cout << m[a[i] + k] << " " << i;
//			return 0;
//		}
//		m[a[i]] = i;
//	}
//	cout << 0 << " " << 0;
//}