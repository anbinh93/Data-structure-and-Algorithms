//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	long n, k, tam;
//	cin >> n >> k;
//	static int a[10000000];
//	static int dd[10000000];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		dd[a[i]] = i;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (k == 0)break;
//		if (a[i] == n && i == 0)continue;
//		a[dd[a[i] + 1]] = a[i];
//		a[i] = --n;
//		k--;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//	}
//}