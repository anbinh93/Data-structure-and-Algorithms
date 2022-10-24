#include <iostream>
#include <algorithm>
using namespace std;

long long n, m = 0, tam = 10e16, dem = 0, da = 0;
static long a[1000000];
static long f[1000000];
static long e[1000000];
static long dd[1000000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("QBDIVSEQ.INP", "r", stdin);
    freopen("QBDIVSEQ.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        f[i] = lower_bound(e + 1, e + m + 1, a[i]) - e;
        if (f[i] > m)
            m++;
        e[f[i]] = a[i];
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << f[i] << " ";
    // }
    for (int j = n; j >= 1; j--)
    {
        if (dd[j] == false)
        {
            for (int i = n; i >= 1; i--)
            {
                if (a[i] < tam && dd[i] == false)
                {
                    dem++;
                    dd[i] = true;
                    tam = a[i];
                }
            }
            tam = 10e16;
            da++;
            if (dem == n)
                break;
        }
    }
    cout << da;
} 