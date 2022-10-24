//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
//	freopen("EXPRESS.INP", "r", stdin);
//	freopen("EXPRESS.OUT", "w", stdout);
//	long long n, k, ans = 0;
//	cin >> n >> k;
//	static long long a[10000050];
//	static long long s[10000004];
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];		
//	}
//	sort(a, a + n);	
//	for (int i = 2; i <= n - k + 1; i++)
//	{
//		ans -= a[i];
//	}
//	for (int i = n - k - 1; i <= n; i++)
//	{
//		ans += a[i];
//	}
//	cout << ans;
//}