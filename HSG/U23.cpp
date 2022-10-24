//#include<iostream>
//using namespace std;
//int main()
//{
//	long n, k, duong = 0, am = 0, tongDuong = 0, tongAm = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> k;
//		if (i <= n / 2)
//		{
//			(k > 0) ? duong++ : am++;
//		}
//		(k > 0) ? tongDuong += k : tongAm += k;
//	}
//	if (tongDuong + tongAm == 0)
//	{
//		cout << "2 doi nhu nhau phai chuyen cho: ";
//		(duong > am) ? cout << am * 2 << " nguoi" : cout << duong * 2 << " nguoi";
//	}
//	else
//	{
//		(tongDuong > abs(tongAm)) ? cout << "Viet Nam" : cout << "Doi nao do";
//	}
//}