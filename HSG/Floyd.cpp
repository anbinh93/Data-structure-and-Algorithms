#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

long b[1][1];
long a[100][100];
long n, m, tam1, tam2;

int main()
{
    freopen("Floyd.INP", "r", stdin);
    freopen("Floyd.OUT", "w", stdout);
    memset(a, 1, sizeof(a));
    memset(b, 1, sizeof(b));
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> tam1;
            if (tam1 < a[i][j] && tam1 != 0)
                a[i][j] = tam1;
        }
    }

    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (a[i][j] > a[i][k] + a[k][j])
                    a[i][j] = a[i][k] + a[k][j];

    for (int i = 1; i <= m; i++)
    {
        cin >> tam1 >> tam2;
        if (a[tam1][tam2] == b[0][0])
        {
            cout << -1 << endl;
            continue;
        }
        cout << a[tam1][tam2] << endl;
    }
}