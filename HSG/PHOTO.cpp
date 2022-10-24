//#include<iostream>
//#include<algorithm>
//#include<stdio.h>
//#include<queue>
//using namespace std;
//
//struct diem
//{
//    long vi_tri, m;
//};
//
//long n, d, a, b;
//long dem = 0, k = 0;
//long tam1, tam2;
//static diem _a[10000000];
//queue<long> q;
//
//bool ss(diem d1, diem d2)
//{
//    return (d1.m < d2.m);
//    return false;
//}
//
//int main()
//{
//    freopen("PHOTO.INP", "r", stdin);
//    freopen("PHOTO.OUT", "w", stdout);
//    cin >> n >> d >> a >> b;
//    for(int i = 1; i <= n; i++)
//    {
//        cin >> tam1 >> tam2;
//        _a[i].m = tam1 * a + tam2 * b;
//        _a[i].vi_tri = i;
//    }
//    sort(_a + 1, _a + n + 1, ss);
//    for(int i = 1; i <= n; i++)
//    {
//        k += _a[i].m;
//        if(k <= d)
//        {
//            dem++;
//            q.push(_a[i].vi_tri);
//        }
//    }
//    cout << dem << endl;
//    while(!q.empty())
//    {
//        cout << q.front() << ' ';
//        q.pop();
//    }
//}