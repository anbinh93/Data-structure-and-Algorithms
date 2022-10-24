#include <iostream>
#include <math.h>
#include <utility>
using namespace std;

long n, k1, k2, tong = 0, dem = 0;
static bool a[1000000];
static pair<long long, long long> f[1000000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("US.INP", "r", stdin);
    freopen("US.OUT", "w", stdout);
    cin >> n;
    a[1] = true;
    for (long long i = 2; i * i <= 1000000; i++)
    {
        if (a[i] == false)
        {
            for (long long j = i * i; j <= 1000000; j += i)
            {
                a[j] = true;
            }
        }
    }

    for (int i = 1; i <= 1000000; i++)
    {
        if (a[i] == false)
        {
            f[i].first = 2 + f[i - 1].first;
            f[i].second = i + 1 + f[i - 1].second;
        }
        else
        {
            for (int j = 1; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                {
                    if (i / j != j)
                    {
                        f[i].first += 2;
                        f[i].second += i / j + j;
                    }
                    else
                    {
                        f[i].first += 1;
                        f[i].second += j;
                    }
                }
            }
            f[i].first += f[i - 1].first;
            f[i].second += f[i - 1].second;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> k1 >> k2;
        cout << f[k2].first - f[k1 - 1].first << ' ' << f[k2].second - f[k1 - 1].second << '\n';
    }
}