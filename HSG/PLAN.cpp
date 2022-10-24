#include<bits/stdc++.h>
using namespace std;

struct diem
{
    long x, y, gt;
    diem(long x, long y, long gt) : x(x), y(y), gt(gt){}
};

long n, m;
string s;
long dem = 0, ln = -1;
static long a[2000][2000];
static long dd[2000][2000];
map<long, long> mp;
queue<diem> q;

bool kt(diem bd, diem hx, long _kt)
{
    if(dd[hx.x][hx.y] == true || hx.x < 1 || hx.x > n || hx.y < 1 || hx.y > m || _kt == 2 || _kt == -2 || _kt == 0 || bd.gt != hx.gt)
        return false;
    return true;
}

void tim()
{
    while(!q.empty())
    {
        diem tam = q.front();
        dd[tam.x][tam.y] = true;
        mp[dem] += 1;
        for(int i = -1; i <= 1; i++)
        {
            for(int j = -1; j <= 1; j++)
            {
                diem hx = diem(tam.x + i, tam.y + j, a[tam.x + i][tam.y + j]);
                if(kt(tam, hx, i + j))
                {
                    dd[hx.x][hx.y] = true;
                    q.push(hx);
                }
            }
        }
        q.pop();
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("PLAN.INP", "r", stdin);
    freopen("PLAN.OUT", "w", stdout);
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> s;
        for(int j = 0; j < s.length(); j++)
        {
             a[i][j + 1] = (s[j] - 48);
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(dd[i][j] == false)
            {
                q.push(diem(i, j, a[i][j]));
                tim();
                dem++;
            }
        }
    }
    cout << dem << '\n';
    for(int i = 0; i < dem; i++)
    {
        ln = ((mp[i] > ln) ? mp[i] : ln);
    }
    cout << ln;
}

