//#include<iostream>
//#include<queue>
//#include<stack>
//#include<stdio.h>
//#include<cstring>
//using namespace std;
//
//long tam1, tam2, tam3, tam4, tam5;
//long n, m, k;
//queue<long> q;
//stack<long> s;
//static long a[10000][10000];
//static long tv[1000000];
//static bool dd[1000000];
//static long gt[1000000];
//
//void tim(long dinh)
//{
//    q.push(dinh);
//    while(!q.empty())
//    {
//        dd[q.front()] = true;
//        for(int i = 1; i <= n; i++)
//        {
//            if(dd[i] == false && a[q.front()][i] != 0)
//            {
//                if(gt[i] > gt[q.front()] + a[q.front()][i])
//                {
//                    gt[i] = gt[q.front()] + a[q.front()][i];
//                    tv[i] = q.front();
//                }
//                q.push(i);
//            }
//        }
//        q.pop();
//    }
//}
//
//int main()
//{
//    freopen("MINWAY2.INP", "r", stdin);
//    freopen("MINWAY2.OUT", "w", stdout);
//    cin >> n >> m;
//    for(int i = 1; i <= m; i++)
//    {
//        cin >> tam1 >> tam2 >> tam3;
//        a[tam1][tam2] = tam3; a[tam2][tam1] = tam3;
//    }
//    cin >> tam4 >> tam5;
//    memset(gt, 1, sizeof(gt));
//    memset(dd, 0, sizeof(dd));
//    gt[tam4] = 0;
//    tim(tam4);
//    cout << gt[tam5] << endl;
//    long tam = tam5;
//    s.push(tam5);
//    while(tam != tam4)
//    {
//        tam = tv[tam];
//        s.push(tam);
//    }
//    while(!s.empty())
//    {
//        cout << s.top() << ' ';
//        s.pop();
//    }
//}