#include <iostream>
#include <queue>
#include <utility>
#include <stack>
#include <vector>
using namespace std;

struct nut
{
    long di, den, ts, cs;
    nut(long di, long den, long ts, long cs) : di(di), den(den), ts(ts), cs(cs) {}
};

struct ss
{
    bool operator()(const nut &a, const nut &b)
    {
        return a.ts > b.ts;
    }
};

long n, m;
long tam1, tam2, tam3;
priority_queue<nut, vector<nut>, ss> q;
stack<long> s;

long da;
long cha[1000000];

void b()
{
    for (int i = 1; i <= n; i++)
        cha[i] = -1;
}

long tim(long u)
{
    return cha[u] < 0 ? u : cha[u] = tim(cha[u]);
}

void _nhap(long s, long r)
{
    if (cha[s] < cha[r])
        swap(s, r);
    cha[r] += cha[s];
    cha[s] = r;
}

void nhap(nut tam)
{
    long t1 = tim(tam.di);
    long t2 = tim(tam.den);
    if (t1 != t2)
    {
        _nhap(t1, t2);
        da += tam.ts;
        s.push(tam.cs);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("MST.INP", "r", stdin);
    freopen("MST.OUT", "w", stdout);
    cin >> n >> m;
    b();
    for (int i = 1; i <= m; i++)
    {
        cin >> tam1 >> tam2 >> tam3;
        q.push(nut(tam1, tam2, tam3, i));
    }
    for (int i = 1; i <= m; i++)
    {
        nhap(q.top());
        q.pop();
    }
    cout << da << '\n';
    while (!s.empty())
    {
        cout << s.top() << '\n';
        s.pop();
    }
}