#include <iostream>
#include <stdio.h>
#include <queue>
#include <map>
using namespace std;

struct diem
{
    long x, y;
    bool operator==(const diem &tam) const
    {
        return (tam.x == x && tam.y == y);
    }
};

long n, m;
long u, i, o, p;
bool co_duong_di = false;
diem _d1, _d2;
queue<diem> q;
map<diem, bool> dd;
static long a[10000][10000];

bool kiem_tra(int _x, int _y, int hang_xom_x, int hang_xom_y)
{
    int tam = _x + _y;
    if (tam == 2 || tam == 0 || tam == -2 || hang_xom_x > m || hang_xom_y > n)
    {
        return false;
    }
    return true;
}

void tim(diem d1)
{
    diem hien_tai, hang_xom;
    while (!q.empty())
    {
        hien_tai = q.front();
        dd[hien_tai] = true;
        if (hien_tai == _d2)
        {
            cout << "Co duong di " << endl;
            co_duong_di = true;
            return;
        }

        for (int i = -1; i <= 1; i++)
        {
            for (int j = -1; j <= 1; j++)
            {
                //cout << hien_tai.x + i << " " << hien_tai.x + j << " " << !a[hien_tai.x + i][hien_tai.x + j] <<  " " << kiem_tra(i, j, hien_tai.x + i, hien_tai.y + j) << endl;
                if (kiem_tra(i, j, hien_tai.x + i, hien_tai.y + j) && !a[hien_tai.x + i][hien_tai.x + j])
                {
                    hang_xom = {hien_tai.x + i, hien_tai.y + j};

                    if (dd[hang_xom])
                        continue;

                    q.push(hang_xom);
                }
            }
        }
        q.pop();
    }
}

int main()
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    while (cin >> u >> i >> o >> p)
    {
        if (a[u][i] != a[o][p])
        {
            cout << 2 << endl;
            continue;
        }
        _d1.x = u;
        _d1.y = i;
        _d2.x = o;
        _d2.y = p;
        tim(_d1);
        if (co_duong_di)
        {
            cout << 1 << endl;
        }
        cout << 2 << endl;
        co_duong_di = false;
    }
}