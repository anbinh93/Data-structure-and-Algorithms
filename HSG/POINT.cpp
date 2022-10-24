#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cstring>
using namespace std;

long n, kq, tam = 0;
static long d[1000000];
static long q[1000000];
static long l[1000000];

int main()
{
    freopen("POINT.INP", "r", stdin);
    freopen("POINT.OUT", "w", stdout);
    cin >> n;
    memset(l, 1, sizeof(l));
    for(int i = 1; i <= n; i++)
    {
        cin >> d[i];
        for(int j = -1; j <= 1; j++)
        {
            q[++tam] = d[i] + j;
        }
    }
    for(int i = 1; i <= n; i++) 
    {
        l[i] = 1;
        for(int j = 1; j <= i - 1; j++)
        {
            if(q[j] < q[i] && l[i] < l[j] + 1)
                l[i] += l[j] + 1;
        }
    }
    kq = l[1];
    for(int i = 2; i <= n; i++)
    {
        if(l[i] > kq)
            kq = l [i];
    }
    cout << kq;
}