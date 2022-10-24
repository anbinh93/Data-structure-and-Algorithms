//#include<iostream>
//#include<queue>
//using namespace std;
//
//static bool a[1000][1000];
//static bool dd[10000000];
//long n, m, tam1, tam2, dinhDau;
//
//void in(long dinh)
//{
//	cout << dinh << " ";
//	dd[dinh] = true;
//	for (int j = 1; j <= n; j++)
//	{
//		if (dd[j] == false && a[dinh][j] == 1)
//		{
//			in(j);
//		}
//	}
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> tam1 >> tam2;
//		a[tam1][tam2] = true;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (dd[i] == false)
//		{
//			in(i);
//		}
//	}
//}