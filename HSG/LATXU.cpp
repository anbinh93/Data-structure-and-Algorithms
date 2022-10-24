#include <iostream>
#include <stdio.h>
using namespace std;

long n;
static bool a[1000000];
long dem = 0;

int main()
{
    freopen("LATXU.INP", "r", stdin);
    freopen("LATXU.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 2; i <= n; i += 2)
    {
        if (a[i] == a[i - 1])
            continue;
        for (int j = i - 1; j >= 1; j--)
        {
            if (a[i] == a[j])
                break;
            a[j] = !a[j];
        }
    }
    for (int i = 1; i <= n; i++)
        if (a[i] == 0)
            dem++;
    cout << dem;
}