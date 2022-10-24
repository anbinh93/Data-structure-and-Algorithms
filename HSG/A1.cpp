#include <bits/stdc++.h>
using namespace std;
#define u unsigned long long

unsigned long long n, q, a, b, res = 0, x, y;

unsigned long long tong(unsigned long long n)
{
    if (n == 0)
        return 0;
    return (n % 9 == 0) ? 9 : (n % 9);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("a1.inp", "r", stdin);
    freopen("a1.out", "w", stdout);
    cin >> q;
    while (q > 0)
    {
        cin >> a >> b;

        x = (a + b);
        y = (b - a + 1);

        if(x % 2 == 0)
            x /= 2;
        else y /= 2;

        res = x * y;
        cout << tong(res) << '\n';
        q--;
        res = 0;
    }
}
