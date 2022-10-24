//#include<iostream>
//#include <cstring>
//using namespace std;
//int n, k;
//static long long f[1000][1000];
//long long dq(int p, int t)
//{
//	if (p > n) return (t < k);
//	if (f[p][t] != -1)return f[p][t] % 111539786;
//	f[p][t] = 0;
//	for (int i = 0; i <= 1; i++)
//	{
//		if (i == 0) f[p][t] += dq(p + 1, 0) % 111539786;
//		else if (t + 1 < k)
//		{
//			f[p][t] += dq(p + 1, t + 1) % 111539786;
//		}
//	}
//	return f[p][t] % 111539786;
//}
//int main()
//{
//	freopen("DNPK.INP", "r", stdin);
//	freopen("DNPK.OUT", "w", stdout);
//	while(cin >> n >> k)
//	{
//		memset(f, -1, sizeof(f));
//		cout << dq(1, 0) % 111539786 << endl;
//	}
//}