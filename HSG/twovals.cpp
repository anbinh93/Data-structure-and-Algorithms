#include <bits/stdc++.h>
using namespace std;

long n, dap_an = 0, do_dai = 0;
static long a[1000001];
int dc = 0;
static bool dd[1000001];

int main()
{
    freopen("twovals.INP", "r", stdin);
    freopen("twovals.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        //cout << i << " " << a[i] << " " << dd[a[i]] << " " << do_dai << " " << dc << endl;
        do_dai++;
        if (dd[a[i]] == false)
        {
            dd[a[i]] = true;
            dc++;
        }
        if (dc == 2)
        {
            dap_an = max(dap_an, do_dai);
        }
        else if (dc > 2)
        {
            do_dai = 0;
            dc = 0;
            i -= 2;
            memset(dd, 0, sizeof(dd));
        }
    }
    cout << dap_an;
}