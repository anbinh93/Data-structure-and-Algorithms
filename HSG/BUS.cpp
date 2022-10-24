#include <iostream>
#include <queue>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct diem
{
    long x, y;
    diem(long x, long y) : x(x), y(y) {}
};

long n, m, da = -1, da_tam = 0;
long x_cu, y_cu;
bool ks = false;
static bool a[10000][10000];
queue<diem> q;

bool kt(long i, long j, long tam_x, long tam_y)
{
    return (i + j != 2 &&
            i + j != 0 &&
            i + tam_x <= n &&
            j + tam_y <= m);
}

void tim()
{
    while (!q.empty())
    {
        diem tam = q.front();
        x_cu = tam.x;
        y_cu = tam.y;
        for (int i = 0; i <= 1; i++)
        {
            for (int j = 0; j <= 1; j++)
            {
                if (kt(i, j, tam.x, tam.y))
                {
                    if (a[tam.x + i][tam.y + j] == 1 || a[tam.x + i][tam.y + j] == 0 && ks == true)
                    {
                        ks = !ks;
                        da++;
                        x_cu = tam.x + i;
                        y_cu = tam.y + j;
                        //cout << x_cu << " " << y_cu << endl;
                        if (x_cu == n && y_cu == m)
                        {
                            if (da_tam < da)
                                da = da_tam;
                        }
                        q.push(diem(tam.x + i, tam.y + j));
                    }
                    else
                    {
                        ks = !ks;
                        da_tam++;
                    }
                }
            }
        }
        q.pop();
    }
}

int main()
{
    //freopen("BUS.INP", "r", stdin);
    //freopen("BUS.OUT", "w", stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    q.push(diem(1, 1));
    while (true)
    {
        tim();
    }
}