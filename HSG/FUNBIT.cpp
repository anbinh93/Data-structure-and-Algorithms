#include <iostream>
#include <stdio.h>
using namespace std;

static long b[100001][31];
long n, k, tam;
long ln = -10e7;
bool kt = true;

int main()
{
    //freopen("FUNBIT.INT", "r", stdin);
    //freopen("FUNBIT.OUT", "w", stdout);
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
    {
        cin >> tam;
        for (int j = 1; j <= k; j++)
        {
            b[i][j] += b[i - 1][j] + tam % 2;
            tam /= 2;
        }
    }
    //cout << b[6][1] - b[3][1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            tam = b[j][1] - b[i - 1][1];
            for (int l = 1; l <= k; l++)
            {
                if (tam != b[j][l] - b[i - 1][l])
                {
                    kt = false;
                    break;
                }
            }
            if (j - i + 1 > ln && kt)
                ln = j - i + 1;
            kt = true;
        }
    }
    cout << ln;
}