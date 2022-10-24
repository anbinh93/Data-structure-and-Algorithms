#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

long n, k, dem = 0;
static long a[1000000];
static long tong[1000000];
static long dd[1000000];

void dq(long p)
{
    for(int i = 1; i <= k; i++)
    {
        tong[p] = tong[p - 1] + i;
        if(dd[i] == false)
        {
            a[p] = i;
            dd[i] = true;
        }  
        else
        {
            dd[i] = false;
            return;
        }

        if(tong[p] > k)
            return;

        if(p == n)
        {
            if(tong[p] == k)
            {
                dem++;
                cout << dem << ".(";
                for(int j = 1; j <= n; j++)
                {
                    cout << a[j] << ',';
                }
                cout << "\b)" << endl;
            }
        }
        else dq(p + 1);
    }
}

int main()
{
    //freopen("NGHIEMPT.INP", "r", stdin);
	//freopen("NGHIEMPT.OUT", "w", stdout);
    cin >> n >> k;
    dq(1);
    if(dem == 0)
        cout << -1;
}