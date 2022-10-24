#include <iostream>
#include <algorithm>
using namespace std;

long n, m = 0, m1 = 0, da = -1, tam;
static long a[1000000];
static long f[1000000];
static long e[1000000];
static long a1[1000000];
static long f1[1000000];
static long e1[1000000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("SPSEQ.INP", "r", stdin);
    freopen("SPSEQ.OUT", "w", stdout);
    cin >> n; tam = n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a1[tam] = a[i];
        tam--;
    }
    for (int i = 1; i <= n; i++)
    {
        f[i] = lower_bound(e + 1, e + m + 1, a[i]) - e;
        if (f[i] > m)
        {
            m++;
        }
        e[f[i]] = a[i];

        f1[i] = lower_bound(e1 + 1, e1 + m1 + 1, a1[i]) - e1;
        if (f1[i] > m1)
        {
            m1++;
        }
        e1[f1[i]] = a1[i];
    }
    for(int i = 1; i <= n; i++)
    {
        da = max(da, min(2 * f[i] - 1, 2 * f1[n - i + 1] - 1));
    }
    cout << da;
}