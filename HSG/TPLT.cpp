//#include<iostream>
//#include<queue>
//using namespace std;
//
//static bool a[1000][1000];
//static long dd[10000000];
//static queue<long> q;
//long n, lt = 0;
//
//void in(long dinh)
//{
//    long x;
//    lt++;
//    dd[dinh] = lt;
//    q.push(dinh);
//    while (!q.empty())
//    {
//        x = q.front();
//        for (int j = 1; j <= n; j++)
//        {
//            if (dd[j] == 0 && a[x][j])
//            {
//                q.push(j);
//                dd[j] = lt; 
//            }
//        }
//        q.pop();
//    }
//}
//
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= n; j++)
//        {
//            cin >> a[i][j];
//        }
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        if (dd[i] == 0)
//        {
//            in(i);
//        }
//    }
//    cout << lt << endl;
//    for (int i = 1; i <= lt; i++)
//    {
//        for (int j = 1; j <= n; j++)
//        {
//            if (dd[j] == i)
//            {
//                cout << j << " ";
//            }
//        }
//        cout << endl;
//    }
//}
