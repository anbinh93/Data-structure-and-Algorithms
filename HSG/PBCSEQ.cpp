#include <iostream>
#include <algorithm>
using namespace std;

struct nut
{
    long trai, phai;
};

bool ss(nut n1, nut n2)
{
    return (n1.trai > n2.trai || n1.trai == n2.trai && n1.phai < n2.phai);
}

static nut a[1000000];
static long r[1000000];
static long f[1000000];
static long e[1000000];
long n, m = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("PBCSEQ.INP", "r", stdin);
    freopen("PBCSEQ.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].trai >> a[i].phai;
    }
    sort(a + 1, a + n + 1, ss);
    for (int i = 1; i <= n; i++)
    {
        r[i] = a[i].phai;
        //cout << a[i].trai << " " << a[i].phai << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        f[i] = upper_bound(e + 1, e + m + 1, r[i]) - e;
        m = max(m, f[i]);
        e[f[i]] = r[i];
    }
    cout << m << endl;
}