#include<bits/stdc++.h>
using namespace std;

long n, m, t = 0, _t;
long a[1000000];
long b[1000000];

int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = n; i >= 1; i--)
    {
        _t = m / a[i];
        m -= (_t) * a[i];
        b[i] = _t;
        t += b[i];
        if(m == 0) break;
    }
    cout << t << endl;
    for(int i = 1; i <= n; i++)
    {
        cout << b[i] << " ";
    }
}