//#include<iostream>
//#include<string>
//#include<queue>
//#include<stack>
//using namespace std;
//
//static bool a[1000][1000];
//static bool dd[10000000];
//queue<long> q; stack<long> s;
//string p, g;
//long n, tam1 = 1, tam2, k;
//long dem = 0, h = 0;
//
//void loang(long dinh)
//{
//    long x;
//    dd[dinh] = true;
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
//            }
//        }
//        q.pop();
//    }
//}
//
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n + 1; i++)
//    {
//        getline(cin, p);
//        k = p.length();
//        h = 0; g = g + ' ';
//        for (int j = 0; j <= k; j++)
//        {
//            if (g[j] != ' ')
//            {
//                h = h * 10 + g[j] - '0';
//            }
//            else { a[i - 1][h] = 1; h = 0; }
//        }
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        if (dd[i] == false)
//        {
//            loang(i);
//            dem++;
//            s.push(i);
//        }
//    }
//    cout << dem << endl;
//    while (!s.empty())
//    {
//        cout << s.top() << " ";
//        s.pop();
//    }
//}