#include<iostream>
using namespace std;

long n;
static long a[10000];
static long f[1000][1000];

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[i][i] = true;
    }
    for(int i = n; i >= 1; i--)
    {
        for(int j = i + 1; j <= n; j++)
        {
            if(a[i] == a[j])
                f[i][j] = f[i + 1][j - 1] + 2;
            else
                f[i][j] = max(f[i + 1][j], f[i][j - 1]);
        }
    }
    cout << f[1][n];
}