#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

bool dc = false;
long n, m;
long tam1, tam2, gap, dem = 0;
static vector<long> a[1000000];
static long dd[1000000];
static long tv1[1000000];
static long tv2[1000000];
stack<long> s;
queue<long> q1;
queue<long> q2;

void BFS()
{
    dd[1] = dd[n] = true;
    while (!q1.empty() && !q2.empty())
    {
        for (long i : a[q1.front()])
            for (long j : a[q2.front()])
                if (i == j)
                {
                    dc = true;
                    gap = i;
                    tv1[gap] = q1.front();
                    tv2[gap] = q2.front();
                    return;
                }
        for (long i : a[q1.front()])
        {
            if (dd[i] == false)
            {
                dd[i] = true;
                tv1[i] = q1.front();
                q1.push(i);
            }
        }
        for (long j : a[q2.front()])
        {
            if (dd[j] == false)
            {
                dd[j] = true;
                tv2[j] = q2.front();
                q2.push(j);
            }
        }
        q1.pop();
        q2.pop();
    }
}

int main()
{
    //freopen("RMOVE.INP", "r", stdin);
    //freopen("RMOVE.OUT", "w", stdout);
    cin >> n >> m;
    if (n == 1 && m == 1)
    {
        cout << 0 << endl
             << 1 << endl
             << 1;
        return 0;
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> tam1 >> tam2;
        a[tam1].push_back(tam2);
    }
    for (int i = 1; i <= m; i++)
    {
        sort(a[i].begin(), a[i].end());
    }
    q1.push(1);
    q2.push(n);
    BFS();
    if (!dc)
    {
        cout << -1;
    }
    else
    {
        tam1 = tv1[gap];
        s.push(tam1);
        while (tam1 != 1)
        {
            tam1 = tv1[tam1];
            s.push(tam1);
            dem++;
        }
        cout << dem + 1 << endl;
        while (!s.empty())
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout << gap << endl;
        tam2 = tv2[gap];
        s.push(tam2);
        while (tam2 != n)
        {
            tam2 = tv2[tam2];
            s.push(tam2);
        }
        while (!s.empty())
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout << gap << endl;
    }
}