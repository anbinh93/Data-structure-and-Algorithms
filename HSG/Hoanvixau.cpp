//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//long n, dem = 0;
//string s;
//static char a[10];
//static bool dd[10];
//void in()
//{
//	for (int j = 0; j < n; j++)
//	{
//		cout << a[j] << " ";
//	}
//	cout << endl;
//}
//void dq(long p)
//{
//	for (int i = 0; i < s.length(); i++)
//	{
//		if (!dd[i])
//		{
//			a[p] = s[i];
//			dd[i] = true;
//			if (p == n - 1)
//			{
//				dem++;
//			}
//			else dq(p + 1);
//			dd[i] = false;
//		}
//	}
//}
//int main()
//{
//	cin >> s;
//	n = s.length();
//	dq(0);
//	cout << dem;
//}