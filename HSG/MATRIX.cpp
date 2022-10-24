#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <cstring>
using namespace std;

long hang, cot;
long tam, da = -1;
static long a[10000][10000];
static long k[10000];

long ln()
{
    int max_so_far = k[1];
    int curr_max = k[1];

    for (int i = 2; i <= hang; i++)
    {
        curr_max = max(k[i], curr_max + k[i]);
        max_so_far = max(max_so_far, curr_max);
    }
    return max_so_far;
}

int main()
{
    freopen("MATRIX.INP", "r", stdin);
    freopen("MATRIX.OUT", "w", stdout);
    cin >> hang >> cot;
    for (int i = 1; i <= hang; i++)
    {
        for (int j = 1; j <= cot; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int trai = 1; trai <= cot; trai++)
    {
        for (int phai = trai; phai <= cot; phai++)
        {
            for (int i = 1; i <= hang; i++)
            {
                k[i] += a[i][phai];
            }
            tam = ln();
            da = max(tam, da);
        }
        memset(k, 0, sizeof(k));
    }
    cout << da;
}