#include <iostream>
using namespace std;

long n, k, b;
long tong = 0, dem = 1;
static long a[10000000];

int main()
{
    cin >> n >> k >> b;
    for (int i = 1; i <= k + b; i++)
    {
        if (i <= n)
            cin >> a[i];
        else
        {
            if (dem > n)
                dem = 1;
            a[i] = a[dem];
            dem++;
        }
    }
    for (int i = b; i <= k + b - 1; i++)
    {
        tong += a[i];
    }
    cout << tong;
}