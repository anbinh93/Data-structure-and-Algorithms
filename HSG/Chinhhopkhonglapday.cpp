//#include<iostream>
//using namespace std;
//long k, n;
//int a[1000];
//int b[1000];
//bool dd[1000000];
//void dq(int p)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		if (!dd[i])
//		{
//			a[p] = i;
//			dd[i] = true;
//			if (p == k)
//			{
//				for (int j = 1; j <= k; j++)
//				{
//					cout << b[a[j]] << " ";
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
//	cin >> k >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> b[i];
//	}
//	dq(1);
//}