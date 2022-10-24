//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//static long long f[20][2][2][2];
//string a, b;
//long long tinh(int doDai, bool lon_hon_a_ko, bool be_hon_b_ko, bool trc_do_co_mot_ko)
//{
//	if (doDai >= b.size())
//	{
//		return 1;
//	}
//
//	if (f[doDai][lon_hon_a_ko][be_hon_b_ko][trc_do_co_mot_ko] != -1)
//		return f[doDai][lon_hon_a_ko][be_hon_b_ko][trc_do_co_mot_ko];
//
//	f[doDai][lon_hon_a_ko][be_hon_b_ko][trc_do_co_mot_ko] = 0;
//
//	for (char i = '0'; i <= '9'; i++)
//	{
//		if((i >= a[doDai] || lon_hon_a_ko) && (i <= b[doDai] || be_hon_b_ko) && (!trc_do_co_mot_ko || i != '3'))0
//		{
//			f[doDai][lon_hon_a_ko][be_hon_b_ko][trc_do_co_mot_ko] +=
//				tinh(doDai + 1, lon_hon_a_ko || i > a[doDai], be_hon_b_ko || i < b[doDai], i == '1');
//		}
//	}
//	return f[doDai][lon_hon_a_ko][be_hon_b_ko][trc_do_co_mot_ko];
//}
//int main()
//{
//	freopen("N13.INP", "r", stdin);
//	freopen("N13.OUT", "w", stdout);
//	while (cin >> a >> b)
//	{
//		memset(f, -1, sizeof(f));
//		while (a.size() < b.size())a = '0' + a;
//		a = ' ' + a;
//		b = ' ' + b;
//		cout << tinh(1, false, false, false) << '\n';
//	}
//
//}