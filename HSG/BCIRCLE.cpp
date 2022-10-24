#include <iostream>
#include <iomanip>
#include <algorithm>
#include <stdio.h>
#include <math.h>
using namespace std;

struct td
{
    long double x, y;
};

long double tinh(td t1, td t2)
{
    return sqrtl((t1.x - t2.x) * (t1.x - t2.x) + (t1.y - t2.y) * (t1.y - t2.y));
}

bool ss(td t1, td t2)
{
    if (t1.x < t2.x || t1.y < t2.y)
        return true;
    return false;
}

long n;
long double nn = 10e16, tam;
static td a[1000000];

int main()
{
    //freopen("BCIRCLE.INP", "r", stdin);
    //freopen("BCIRCLE.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].x >> a[i].y;
    }
    sort(a + 1, a + n + 1, ss);
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << a[i].x << " " << a[i].y << endl;
    // }
    for (int i = 1; i <= n; i++)
    {
        tam = tinh(a[i], a[i + 1]);
        if (nn > tam)
        {
            nn = tam;
        }
    }
    cout << fixed << setprecision(2) << nn;
}