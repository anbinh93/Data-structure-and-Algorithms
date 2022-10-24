#include<bits/stdc++.h>
using namespace std;

long n, m = 0, dem = 0;
long a[1000];

void kq(long k)
{
    dem++;
    for(int i = 0; i <= k; i++)
        cout << a[i] << " ";
    cout << '\n';
}

void dq(long k)
{
    int l = (k == 0) ? 1 : a[k - 1];
    int h = (n - m) / 2;

    for(a[k] = l; a[k] <= h; a[k]++)
    {
        m += a[k];
        dq(k + 1);
        m -= a[k];
    }

    a[k] = n - m;
    kq(k);
}

int main()
{
    freopen("IPARA.INP", "r", stdin);
    freopen("IPARA.OUT", "w", stdout);
    cin >> n;
    dq(0);
    cout << dem;
}