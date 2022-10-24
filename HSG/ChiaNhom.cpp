//#include<iostream>
//#include<algorithm>
//#include<map>
//using namespace std;
//int main()
//{
//	long n, k, p, dem = 0;
//	cin >> n >> k;
//	map<long, int> m;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> p;
//		m[p] = -1;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << m.begin()->first + k << " " << m.begin()->first << '\n';
//		if (!m[m.begin()->first + k])
//		{
//			dem++;
//			m.erase(m.begin()->first + k);
//		}
//		m.erase(m.begin());
//	}
//	cout << dem;
//}