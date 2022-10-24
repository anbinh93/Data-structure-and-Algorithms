//#include<iostream>
//#include<queue>
//using namespace std;
//
//static bool a[1000][1000];
//static bool dd[10000000];
//static queue<long> q;
//long n, m, tam1, tam2;
//
//void in(long dinh)
//{
//    long x;
//	cout << dinh << " ";
//	dd[dinh] = true;
//    q.push(dinh);
//    for (int i = 0; i < q.size(); i++)
//    {
//        x = q.front();
//        for (int j = 1; j <= n; j++)
//        {
//            if (dd[j] == false && a[x][j])
//            {
//                q.push(j);
//                dd[j] = true;
//                cout << j << " ";
//            }
//        }
//        q.pop();
//    }
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> tam1 >> tam2;
//		a[tam1][tam2] = a[tam2][tam1] = true;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (dd[i] == false)
//		{
//			in(i);
//		}
//	}
//}
