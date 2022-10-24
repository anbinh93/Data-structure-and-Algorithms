//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//
//long kq;
//string n;
//static long long l[10000][2][2];
//// 2 đụt auto này em đã kiểm tra rồi thầy ạ, đúng thầy ạ
//auto sau_tam = [](int i, int j) { return (i == 6 || i == 8 || j == 6 || j == 8); };
//
//auto kiem_tra = [](string p) { for (int i = 1; i <= p.size(); i++) { if (p[i] - 48 == 6 || p[i] - 48 == 8)return true; } return false; };
//
//long long tinh(long doDai, bool TMDK, int nho)
//{
//	if (doDai < 1) return TMDK == 1 && nho == 0;
//
//	if (l[doDai][TMDK][nho] != -1)return l[doDai][TMDK][nho];
//
//	l[doDai][TMDK][nho] = 0;
//
//	for (int i = 0; i <= 9; i++)
//	{
//		for (int j = 0; j <= 9; j++)
//		{
//			if ((i + j + nho) % 10 == n[doDai])
//				l[doDai][TMDK][nho] += tinh(doDai - 1, sau_tam(i, j), (i + j + nho) / 10);
//		}
//	}
//	return l[doDai][TMDK][nho];
//}
//
//int main()
//{
//	while (cin >> n)
//	{
//		memset(l, -1, sizeof(l));
//		n = ' ' + n;
//		cout << tinh(n.size() - 1, 0, 0) / 2 - (kiem_tra(n)) ? 2 : 0;
//	}
//}