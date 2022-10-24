#include <iostream>
#include <stdio.h>
using namespace std;

long n, tam;
static long a[1000000];

int main()
{
    freopen("Booksort.INP", "r", stdin);
    freopen("Booksort.OUT", "w", stdout);
    cin >> n;
    tam = n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = n; i >= 1; i--)
    {
        if (a[i] == tam)
        {
            tam--;
        }
    }
    cout << tam;
}