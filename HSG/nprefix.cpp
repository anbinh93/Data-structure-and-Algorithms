#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

long long n, m, tam;
int dd_m;
long long _min = 1000000000000000000;

int main()
{
    freopen("nprefix.INP", "r", stdin);
    freopen("nprefix.OUT", "w", stdout);
    cin >> m >> n;
    tam = n;
    dd_m = (int)log10(m) + 1;
    n = (unsigned long long)(n / pow(10, dd_m)) + 1;
    _min = (unsigned long long)(_min / pow(10, (int)log10(_min) - dd_m));
    if (tam % _min - m > 0)
        cout << n;
    else
        cout << n - 1;
}