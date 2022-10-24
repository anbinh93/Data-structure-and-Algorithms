#include<iostream>
using namespace std;

long n, tong = 0, tam;
static long a[1000000];

int main()
{
    freopen("SUMAVR.INP", "r", stdin);
    freopen("SUMAVR.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++)
    {
        tam = a[i] * i;
        cout << tam - tong << " ";
        tong = tam;
    }
}