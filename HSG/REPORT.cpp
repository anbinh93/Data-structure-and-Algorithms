#include<iostream>
using namespace std;

long n, tong = 0, nn = 10e9, tam;
static long a[1000000];

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> tam;
        if(nn > tam)
            nn = tam;
        if(tam < 0)
        {
            tong += -tam;
        }
    }
    if(nn > 0)
    {
        cout << nn;
        return 0;
    }
    else 
    {
        cout << -tong;
    }
} 