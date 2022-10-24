#include<bits/stdc++.h>
using namespace std;

long n, dem = 0;
long a[10000];
bool b[10000];
long tong[10000];

void kq(long k)
{
    for(int i = 1; i < k; i++)
    {
        if(a[i] > a[i + 1])
        {
            return;
        }
    }
    dem++;
    for(int i = 1; i <= k; i++)
        cout << a[i] << " ";
    cout << '\n';
}

void dq(long k)
{
    for(int i = 1; i <= n; i++)
    {
        if(b[i] == true)
            continue;
        tong[k] = tong[k - 1] + i;
        if(tong[k] > n)
            continue;
        a[k] = i;
        b[i] = true;
        if(tong[k] == n)
        {
            kq(k);
        }
        else if (tong[k] < n)
        {
            dq(k + 1);
        }
        b[i] = false;
    }
}

int main()
{
    freopen("IPARC.INP", "r", stdin);
    freopen("IPARC.OUT", "w", stdout);
    cin >> n;
    dq(1);
    cout << dem;
}