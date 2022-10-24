#include <iostream>
#include <algorithm>
using namespace std;
struct tui
{
    long chi_so, nang, gia_tri;
};
static tui a[1000000];
static long nang[1000000];
static long tong[1000000];
static int b[10000];
long n, m, _tong = 0;
void dq(long p)
{
    for (int i = 0; i <= 1; i++)
    {
        nang[p] = nang[p - 1] + a[p].nang * i;
        tong[p] = tong[p - 1] + a[p].gia_tri * i;
        b[p] = i;
        if (nang[p] > m)
        {
            b[p] = !i;
            return;
        }
        if (p == n)
        {
            if (_tong < tong[p])
                _tong = tong[p];
        }
        else
            dq(p + 1);
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].nang >> a[i].gia_tri;
        a[i].chi_so = i;
    }
    dq(1);
    cout << _tong << endl;
    for (int i = 1; i <= n; i++)
    {
        if (b[i] == 1)
            cout << a[i].chi_so << " ";
    }
}