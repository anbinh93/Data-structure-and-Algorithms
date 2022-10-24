#include <iostream>
using namespace std;

long n, k;
static bool a[10000000];
static long long f[10000000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("CHEBY.INP", "r", stdin);
    freopen("CHEBY.OUT", "w", stdout);
    cin >> n;

    for (long long i = 2; i * i <= 2000000; i++)
    {
        if (a[i] == false)
        {
            for (long long j = i * i; j <= 2000000; j += i)
            {
                a[j] = true;
            }
        }
    }

    for (long long i = 2; i <= 2000000; i++)
    {
        if (a[i] == false)
        {
            f[i] = f[i - 1] + 1;
        }
        else
            f[i] = f[i - 1];
    }

    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        cout << f[k * 2] - f[k] << '\n';
    }
}