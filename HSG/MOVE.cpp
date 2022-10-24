//#include<iostream>
//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//static long a[100][10000];
//static long b[10000];
//long n, m, tam1, tam2;
//bool co_mot = false;
//long nhanh = 0, kq = 10e7;
//
//int main()
//{
//    freopen("MOVE.INP", "r", stdin);
//    freopen("MOVE.OUT", "w", stdout);
//    cin >> n >> m;
//    for(int i = 1; i <= n; i++)
//    {
//        for(int j = 1; j <= m; j++)
//        {
//            cin >> a[i][j];
//            if(a[i][j] == 1)
//            {
//                b[j]++;
//                co_mot = true;
//            }
//        }
//        if(!co_mot)
//        {
//            cout << -1;
//            return 0;
//        }
//        co_mot = false;
//    }
//    sort(b + 1, b + 10001, greater<int>());
//    for(int i = 1; i <= m; i++)
//    {
//        for(int j = 1; j <= n; j++)
//        {
//            if(a[i][j] == 0)
//            {
//                tam1 = tam2 = j;
//                while(a[i][tam1] <= 1 || a[i][tam2] <= 1)
//                {
//                    tam1--; tam2++;
//                }
//                if(tam1 == 1)
//                {
//                    nhanh += tam1;
//                }
//                else nhanh += tam2;
//            }
//        }
//        if(nhanh < kq)
//        {
//            kq = nhanh;
//        }
//    }
//    cout << kq;
//}