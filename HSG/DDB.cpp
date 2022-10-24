//#include <iostream>
//#include <algorithm>
//#include <cmath>
//#include <cstring>
//using namespace std;
//bool snt[50000080];
//void sang(long long n)
//{
//    memset(snt, true, n);
//    snt[1] = false;
//    for (int i = 2; i <= sqrt(n); i++)
//    {
//        if (snt[i])
//        {
//            for (int j = i * i; j <= n; j += i)
//            {
//                snt[j] = false;
//            }
//        }
//    }
//}
//int main()
//{
//    //freopen("DDB.INP", "r", stdin);
//    //freopen("DDB.OUT", "w", stdout);
//    ios_base::sync_with_stdio(0);
//    cin.tie(0); cout.tie(0);
//    long long n, a;
//    sang(1000050);
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a;
//        cout << count(snt + a + 1, snt + a * 2, true) << "\n";
//    }
//}
//
//
//
