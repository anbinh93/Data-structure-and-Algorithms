#include <iostream>
#include <utility>
using namespace std;

struct tui
{
    long nang, giaTri;
};

static long kq[1000][1000];
static tui a[10000];
long n, m, GTTD = -1;

long max(long k, long l)
{
    return (k > l) ? k : l;
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].nang >> a[i].giaTri;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            kq[i][j] = max(kq[i - 1][j], (j - a[i].nang >= 0) ? kq[i - 1][j - a[i].nang] + a[i].giaTri : 0);
        }
    }
    cout << kq[n][m] << '\n';
    while (n != 0)
    {
        if (kq[n][m] != kq[n - 1][m])
        {
            cout << n << " ";
            m = m - a[n].nang;
        }
        n = n - 1;
    }
}