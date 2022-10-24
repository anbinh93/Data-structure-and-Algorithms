#include<bits/stdc++.h>
using namespace std;

long n, dem = 0;
static long a[100000];
static long b[100000];
static long dd[100000];

void dq(long p)
{
    for(int i = 1; i <= n; i++)
    {
        if(dd[i] == true)
            continue;
        b[p] = i;
        dd[i] = true;
        if(p == n)
        {
            for(int j = 1; j <= n; j++)
            {
                cout << a[b[j]] << " ";
            }
            cout << endl;
            dem++;
        }
        else dq(p + 1);
        dd[i] = false;
    }
}

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    dq(1);
    cout << dem;
}
