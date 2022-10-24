//#include<iostream>
//using namespace std;
//long n, dem = 0;
//static long a[10000];
//char doi(int i)
//{
//	return (i == 0) ? 'X' : 'D';
//}
//void dq(long p)
//{
//	for (int i = 0; i <= 1; i++)
//	{
//		a[p] = i;
//		if (p == n)
//		{
//			for (int j = 1; j <= p; j++)
//			{
//				cout << doi(a[j]);
//			}
//			dem++;
//			cout << endl;
//		}
//		else dq(p + 1);
//	}
//}
//int main()
//{
//	cin >> n;
//	dq(1);
//	cout << dem;
//}