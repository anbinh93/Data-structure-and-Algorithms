#include <iostream>
#include <cstring>
using namespace std;

struct tui
{
    long nang, giaTri;
};

long max(long a, long b, long c)
{
    if(a > b) 
        return (a > c) ? a : c;
    else
        return (b > c) ? b : c;
}

long f[1000][100000];
static tui a[1000000];
long n, m;

long long tinh(long i, long j)
{
    if (i == 0)
        return 0;
    if (f[i][j] != -1)
        return f[i][j];
    f[i][j] = 0;
    if (j < a[i].nang)
        f[i][j] = tinh(i - 1, j);
    else
        f[i][j] = max(tinh(i - 1, j), tinh(i - 1, j - a[i].nang) + a[i].giaTri, tinh(i, j - a[i].nang) + a[i].giaTri);
    return f[i][j];
}

int main()
{
    // freopen("KNAPSACK.INP", "r", stdin);
    // freopen("KNAPSACK.OUT", "w", stdout);
    cin >> n >> m;
    memset(f, -1, sizeof(f));
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].nang >> a[i].giaTri;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << f[i][j] << " ";
        }
        cout << endl;
    }
    cout << tinh(n, m);
}