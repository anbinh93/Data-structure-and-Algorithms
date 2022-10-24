#include<bits/stdc++.h>
using namespace std;

long n, d = -1;
long a[1000][1000];
long b[1000][1000];

long max(long a, long b, long c) 
{
    if(a < b) return (b > c) ? b : c;
    else return (a > c) ? a : c;
}

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
    {
        cin >> a[i][j];
    }

    for(int j = 1; j <= n; j++)
    for(int i = 1; i <= n; i++)
    {
        b[i][j] = max(b[i - 1][j - 1], b[i][j - 1], b[i + 1][j - 1]) + a[i][j];
    }

    for(int i = 1; i <= n; i++)
    {
        d = (b[i][n] > d) ? b[i][n] : d;
    }
    cout << d;
}