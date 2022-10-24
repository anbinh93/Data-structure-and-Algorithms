#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
using namespace std;

long n, m, x, y;
long tam1, tam2;
static vector<long> a[1000000];
static long tv[1000000];
static bool dd[1000000];
queue<long> q;
stack<long> s;

void kq()
{
    tam1 = tv[y];
    while (tam1 != x)
    {
        s.push(tam1);
        tam1 = tv[tam1];
    }
    s.push(x);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << y;
    exit(0);
}

void BFS(long dinh)
{
    dd[dinh] = true;
    q.push(dinh);
    while (!q.empty())
    {
        for (long i : a[q.front()])
        {
            if (dd[i] == false)
            {
                dd[i] = true;
                tv[i] = q.front();
                q.push(i);
                if (i == y)
                {
                    kq();
                }
            }
        }
        q.pop();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("BFS2.INP", "r", stdin);
    freopen("BFS2.OUT", "w", stdout);
    cin >> n >> m >> x >> y;
    for (int i = 1; i <= m; i++)
    {
        cin >> tam1 >> tam2;
        a[tam1].push_back(tam2);
    }
    for (int i = 1; i <= n; i++)
    {
        sort(a[i].begin(), a[i].end());
    }
    BFS(x);
}