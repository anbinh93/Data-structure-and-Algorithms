#include <iostream>
#include <stack>
using namespace std;

long long n, tam = 10e16, m = 0;
static long a[1000000];
static long f[1000000];
static long e[1000000];
stack<long> s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("LIS.INP", "r", stdin);
    freopen("LIS.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        f[i] = lower_bound(e + 1, e + m + 1, a[i]) - e;
        if (f[i] > m)
        {
            m++;
        }
        e[f[i]] = a[i];
    }
    cout << m << endl;
    for (int i = n; i >= 1; i--)
    {
        //cout << a[i] << " " << e[i] << endl;
        if (a[i] < tam && f[i] == m)
        {
            m--;
            s.push(a[i]);
        }
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}