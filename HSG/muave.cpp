#include<iostream>
using namespace std;

long n, da = 10e9;
static long a[1000];
static long b[1000];
static bool vt[1000];
static long tong[1000];

void dq(long p)
{
    for(int i = 0; i <= 1; i++)
    {
        vt[p] = i;
        if(tong[p] >= da)
        {
            vt[p] = 0;
            continue;
        }
        if(vt[p - 1] == 0)
        {
            tong[p] = tong[p - 1] + a[p];
        }
        else 
        {
            tong[p] = tong[p - 1] + b[p];
        }
        if(p == n)
        {
            if(tong[p] < da)
                da = tong[p];
        }
        else dq(p + 1);
    }
}

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= n - 1; i++)
    {
        cin >> b[i];
    }
    dq(1);
    cout << da;
    for(int i = n; i >= 1; i--)
    {
        if(vt[i] == true)
            cout << i << " ";
    }
}