//#include<iostream>
//#include<algorithm>
//using namespace std;
//void soLap(long long a[], long long n)
//{
//	int k = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] != a[k])
//			a[++k] = a[i];
//	}
//}
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
//	long long n, k = 0;
//	cin >> n;
//	static long long a[10000000];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	sort(a, a + n);
//	soLap(a, n);
//	for (int i = 0; i < n; i++)
//	{
//		if (k == a[i])
//		{
//			k++;
//		}
//		else 
//		{
//			k == 0 ? cout << k : cout << k++;
//			return 0;
//		}
//	}
//}