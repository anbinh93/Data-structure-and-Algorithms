//#include<iostream>
//#include<cstring>
//using namespace std;
//struct hop
//{
//	long BD, het;
//};
//int L[1002], T[1002]; 
//hop a[1002], kq[1002];
//int n, res, cs;
//void doc()
//{
//	cin >> n;
//	for (int i = 1; i <= n; ++i) 
//	{ 
//		cin >> a[i].BD >> a[i].het;
//	}
//}
//void xuly()
//{
//	memset(L, 1, sizeof(L));
//	memset(T, 0, sizeof(T));
//	for (int i = 1; i <= n; ++i)
//	{
//		L[i] = 1;
//		for (int j = 1; j <= i - 1; ++j)
//			if ((a[j].het < a[i].BD) && (L[i] < L[j] + 1))
//			{
//				L[i] = L[j] + 1;   
//				T[i] = j;
//			}
//	}
//}
//void inkq()
//{
//	int res = L[1]; int cs = 1;
//	for (int i = 2; i <= n; ++i)
//		if (L[i] > res)
//		{
//			res = L[i]; cs = i;
//		}
//	cout << res << endl;
//	int j = res;
//	do
//	{
//		kq[j] = a[cs];
//		cs = T[cs];
//		--j;
//	} while (j != 0);
//	for (int i = 1; i <= res; ++i)
//	{
//		cout << kq[i].BD << " " << kq[i].het << endl;
//	}
//}
//int main()
//{
//	doc(); xuly(); inkq();
//}