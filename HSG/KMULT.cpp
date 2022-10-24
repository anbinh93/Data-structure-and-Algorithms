#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

long n, k;
static long a[1000000];
static long dd[1000000];
static long tong[1000000];

void dq(long p)
{
    for (int i = 0; i <= 1; i++)
    {
        dd[p] = i;
        if (i == 0)
        {
            tong[p] = tong[p - 1] - a[p];
        }
        else
        {
            tong[p] = tong[p - 1] + a[p];
        }

        if (p == n)
        {
            if (tong[p] % k == 0)
            {
                cout << 1 << endl;
                for (int j = 2; j <= n; j++)
                {
                    cout << ((dd[j] == 0) ? '-' : '+') << " ";
                }
                exit(0);
            }
        }
        else
            dq(p + 1);
    }
}

int main()
{
    freopen("KMULT.INP", "r", stdin);
    freopen("KMULT.OUT", "w", stdout);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    tong[1] = a[1];
    dq(2);
    cout << 0;
}