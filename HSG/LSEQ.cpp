#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

long n, tam = 1, dem = -1, soko = 0, tam1;
static long a[1000001];

int main()
{
    //freopen("LSEQ.INP", "r", stdin);
    //freopen("LSEQ.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            soko++;
    }
    tam1 = soko;
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    for (int i = 2; i <= n; i++)
    {
        if (a[i] == a[i - 1] + 1)
        {
            tam++;
        }
        else if (soko != 0)
        {
            tam++;
            soko--;
            continue;
        }
        else
        {
            cout << a[i] << " " << a[i - 1] << endl;
            if (tam > dem)
                dem = tam;
            tam = 1;
            soko = tam1;
        }
    } //0 1 2 4 6 7 8
    cout << dem + soko + 1;
}