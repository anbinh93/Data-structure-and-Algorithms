#include <bits/stdc++.h>
using namespace std;

long n, a[1000][1000];
static long dp[1000][1000];

long tinh(long i, long j)
{
    if (j == n - 1)
        return 1;
    if (dp[i][j] != -1)
        return dp[i][j];
    dp[i][j] = 0;
    for(int k = 0; k < n; k++)
        if (a[i][j] <= a[k][j + 1])
            dp[i][j] += tinh(k, j + 1) * (a[i][j] <= a[k][j + 1]);
    return dp[i][j];
};

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            dp[i][j] = -1;

    cout << tinh(0, 0);
}
