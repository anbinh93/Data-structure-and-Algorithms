#include <bits/stdc++.h>
using namespace std;

long long c, n, k, x, t[10100];

int main()
{
    cin >> c;
    cin >> n;
    t[0] = 1;
    t[1] = 1;
    for (long long i = 2; i <= n; ++i)
    {
        t[i] = t[i - 1] * 2;
        if (t[i] > 1e17)
            t[i] = 1e17;
    }

    if (c == 1)
    {
        cin >> k;
        while (n > 0)
        {
            for (int i = 1; i <= n; ++i)
                if (k > t[n - i])
                    k -= t[n - i];
                else
                {
                    cout << i << " ";
                    n -= i;
                    break;
                }
        }
    }
    else
    {
        k = 0;
        while (n > 0)
        {
            cin >> x;
            for (long long i = 1; i < x; ++i)
                k += t[n - i];
            n -= x;
        }
        cout << k + 1;
    }
}