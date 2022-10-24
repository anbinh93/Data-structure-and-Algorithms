#include <bits/stdc++.h>
using namespace std;

long n, tb = 0;
long a[1000];
long f[1000][1000];
vector<long> v1;
vector<long> v2;

int main()
{
    // freopen("TFWAR.INP", "r", stdin);
    // freopen("TFWAR.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        tb += a[i];
    }
    tb /= 2;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= tb; j++)
        {
            if (j < a[i])
            {
                f[i][j] = f[i - 1][j];
            }
            else
            {
                f[i][j] = max(f[i - 1][j - a[i]] + a[i], f[i - 1][j]);
            }
        }
    }

    for (int i = n; i >= 1; i--)
    {
        if (f[i][tb] == f[i - 1][tb])
        {
            v2.push_back(i);
        }
        else
        {
            v1.push_back(i);
            tb -= a[i];
        }
    }

    cout << v1.size() << " " << v2.size() << '\n';
    for (auto i : v1)
        cout << i << ' ';
    cout << '\n';
    for (auto i : v2)
        cout << i << ' ';
}