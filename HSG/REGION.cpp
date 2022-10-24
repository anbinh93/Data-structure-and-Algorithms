#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;

struct diem
{
	long x, y;

	bool operator == (const diem& tam)const
	{
		return x == tam.x && y == tam.y;
	}

	bool operator < (const diem& tam)const
    {
        return x < tam.x || x == tam.x && y < tam.y;
    }
};

long m, n;
long dem = 0;
static bool a[10000][10000];
queue<diem> q;

bool kiem_tra(int _x, int _y, int hang_xom_x, int hang_xom_y)
{
    int tam = _x + _y;
    if (tam == 2 || tam == 0 || tam == -2 || hang_xom_x > m + 1 || hang_xom_y > n + 1 ||
        hang_xom_x < 0 || hang_xom_y < 0)
    {
        return false;
    }
    return true;
}

void tim()
{
    diem hang_xom, hien_tai;
    while (!q.empty())
    {
        hien_tai = q.front();
        a[hien_tai.x][hien_tai.y] = true;
        for (int i = -1; i <= 1; i++)
        {
            for (int j = -1; j <= 1; j++)
            {
                //cout << hien_tai.x + i << " " << hien_tai.x + j << " " << !a[hien_tai.x + i][hien_tai.x + j] <<  " " << kiem_tra(i, j, hien_tai.x + i, hien_tai.y + j) << endl;
                if (kiem_tra(i, j, hien_tai.x + i, hien_tai.y + j) && !a[hien_tai.x + i][hien_tai.x + j])
                {
                    hang_xom.x = hien_tai.x + i; hang_xom.y = hien_tai.y + j;
                    q.push(hang_xom);
                }
            }
        }
        q.pop();
    }
}

int main()
{
    freopen("REGION.INP", "r", stdin);
	freopen("REGION.OUT", "w", stdout);
	cin >> m >> n;
    swap(m, n);
    for (int i = 2; i <= m + 1; i++)
    {
        for (int j = 2; j <= n + 1; j++)
        {
            cin >> a[i][j];
        }
    }
    diem tam;
    tam.x = 1; tam.y = 1;
    q.push(tam);
    tim();
    for (int i = 2; i <= m + 1; i++)
    {
        for (int j = 2; j <= n + 1; j++)
        {
            if (a[i][j] == 0)
            {
                dem++;
            }
        }
    }
    cout << dem;
}