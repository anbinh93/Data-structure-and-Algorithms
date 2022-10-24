//#include<iostream>
//#include<algorithm>
//#include<map>
//#include<iterator>
//using namespace std;
//struct doan_thang
//{
//	long dau; long cuoi;
//};
//bool ss(doan_thang d1, doan_thang d2)
//{
//	if (d1.cuoi < d2.cuoi)return true;
//	if (d1.dau < d2.dau)return true;
//	return false;
//}
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
//	//freopen("REP.INP", "r", stdin);
//	//freopen("REP.OUT", "w", stdout);
//	long n, dem = 0, tam;
//	static doan_thang a[10000000];
//	static long b[10000000];
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i].dau >> a[i].cuoi;
//	}
//	sort(a + 1, a + n + 1, ss);
//	b[1] = a[1].cuoi - 1; b[2] = a[1].cuoi; tam = 2;
//	for (int i = 2; i <= n; i++)
//	{
//		if (a[i].dau > b[tam])
//		{
//			tam++;
//			b[tam] = a[i].cuoi - 1;
//			b[++tam] = a[i].cuoi;
//		}
//		else if (a[i].dau > b[tam - 1])
//		{
//			b[++tam] = a[i].cuoi;
//		}
//	}
//	cout << tam << '\n';
//	for (int i = 1; i <= tam; i++)
//	{
//		cout << b[i] << " ";
//	}
//}