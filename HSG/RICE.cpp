#include <bits/stdc++.h>
using namespace std;

long long m, n, k, x, minn;
long long a[500000], f[500000];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();

    cin >> m >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    sort(a + 1, a + 1 + n);

    minn = 1e18;
    x = 1;
    for (int i = 1; i <= n; ++i)
    {
        while (x < i && a[i] - a[x] + 1 > k)
        {
            minn = min(minn, f[x - 1] - a[x]);
            x++;
        }
        f[i] = min(k + f[x - 1], a[i] + 1 + minn);
    }
    cout << f[n];
}