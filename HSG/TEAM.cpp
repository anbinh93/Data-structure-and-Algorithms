#include<bits/stdc++.h>
using namespace std;

struct doi
{
    long diem, tg, tt;
};

long n, m, ln;
long kq, tg;
static long a[2000][2000];
static doi b[100000];

bool ss(doi d1, doi d2)
{
    return (d1.diem > d2.diem);
}

int main()
{ 
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("TEAM.INP", "r", stdin);
    freopen("TEAM.OUT", "w", stdout);
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        b[i].tt = i;
        for(int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if(a[i][j] != 0)
            {
                b[i].diem += 10;
                b[i].tg += a[i][j];
            }
        }
    }
    sort(b + 1, b + n + 1, ss);
    ln = b[1].diem; tg = b[1].tg;
    for(int i = 1; i <= n; i++)
    {
        if(b[i].diem == ln)
        {
            if(b[i].tg < tg)
            {
                kq = b[i].tt;
                tg = b[i].tg;
                ln = b[i].diem;
            }
        }
    }
    cout << kq;
}

