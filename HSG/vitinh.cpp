#include <iostream>
#include <stdio.h>
using namespace std;

unsigned long long n;
unsigned long long da = 0;

int main()
{
    freopen("vitinh.INP", "r", stdin);
    freopen("vitinh.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i *= 10)
        da += (n - i + 1);
    cout << da;
}