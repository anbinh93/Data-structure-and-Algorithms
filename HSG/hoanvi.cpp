//#include<iostream>
//using namespace std;
//long n;
//int a[1000];
//bool dd[1000000];
//void dq(int p)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		if (!dd[i])
//		{
//			a[p] = i;
//			dd[i] = true;
//			if (p == n)
//			{
//				for (int j = 1; j <= n; j++)
//				{
//					cout << a[j] << " ";
//				}
//				cout << endl;
//			}
//			else dq(p + 1);
//			dd[i] = false;
//		}
//	}
//}
//int main()
//{
//	cin >> n;
//	dq(1);
//}