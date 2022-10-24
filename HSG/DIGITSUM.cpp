#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

unsigned long long a, b, c, _b, _c, t;
string tam = "1999999999999999999";
string _tam;

int chu_so(unsigned long long p)
{
    return floor(log10(p) + 1);
}

int main()
{
    //freopen("DIGITNUM.INP", "r", stdin);
    //freopen("DIGITNUM.OUT", "w", stdout);
    cin >> a;
    _tam = tam.substr(0, chu_so(a));

    for (int i = 0; i < _tam.length(); i++)
    {
        b = (b * 10) + (_tam[i] - '0');
    }

    c = a - b;
    _b = b;
    _c = c;

    while (b != 0)
    {
        t += b % 10;
        b /= 10;
    }
    while (c != 0)
    {
        t += c % 10;
        c /= 10;
    }
    cout << t << endl;
    cout << _b << " " << _c;
}