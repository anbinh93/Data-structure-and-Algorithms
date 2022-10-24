#include <iostream>
#include <stdio.h>
using namespace std;

long n, kq = -10e16;
static long a[1000000];
static long s[1000000];

int main()
{
    freopen("BEAUTY.INP", "r", stdin);
    freopen("BEAUTY.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 3; j <= n; j++)
        {
            if (s[j] - s[i - 1] > kq && (i - j + 1) % 2 == 0)
            {
                //cout << i << " " << j << " " << s[j] - s[i] << endl;
                kq = s[j] - s[i - 1];
            }
        }
    }
    cout << kq;
}