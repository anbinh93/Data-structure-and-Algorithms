#include <iostream>
using namespace std;

long n, k;
long long ln = -10e7, da = 0, ln_1;
static long tong_i[1000000];
static long a[1000000];
static long b[1000000];

void dq(long p)
{
    for (int i = 0; i <= 1; i++)
    {
        tong_i[p] = tong_i[p - 1] + i;

        if (a[p] * i > ln)
        {
            ln_1 = ln;
            ln = a[p] * i;
        }

        if (p == n && tong_i[p] != k)
        {
            return;
        }
        else if (tong_i[p] == k || p == n)
        {
            da = (da + ln) % 1000000007;
            ln = ln_1;
        }
        else
            dq(p + 1);
    }
}

int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n - k + 1; i++)
    {
        dq(i);
    }
    cout << da;
}