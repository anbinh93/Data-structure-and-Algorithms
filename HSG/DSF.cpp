#include <iostream>
using namespace std;

long n, m, tam1, tam2;
long tplt;
long cha[1000000];

void b()
{
    tplt = n;
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

void nhap(long s, long v)
{
    long t1 = tim(s);
    long t2 = tim(v);
    if (t1 != t2)
    {
        _nhap(t1, t2);
        tplt--;
        if (tplt == 0)
            tplt = 1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("DSF.INP", "r", stdin);
    freopen("DSF.OUT", "w", stdout);
    cin >> n >> m;
    b();
    for (int i = 1; i <= m; i++)
    {
        cin >> tam1 >> tam2;
        nhap(tam1, tam2);
        cout << tplt << '\n';
    }
    // for (int i = 1; i <= n; i++)
    //     cout << c.cha[i] << " ";
}