#include<iostream>
using namespace std;

long n, x, x1 = 0, x2 = 0;
static long a[1000000];

int main()
{
    freopen("SSEARCH.INP", "r", stdin);
    freopen("SSEARCH.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cin >> x;
    for(int i = 1; i <= n; i++)
    {
        if(a[i] >= x)
        {
            x1 = i;
            break;
        }
    }
    for(int i = n; i >= 1; i--)
    {
        if(a[i] < x)
        {
            x2 = i;
            break;
        }
    }
    cout << ((x1 == 0) ? -1 : x1) << endl << ((x2 == 0) ? -1 : x2);
}