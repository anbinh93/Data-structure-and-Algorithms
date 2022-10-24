#include<iostream>
#include<algorithm>
using namespace std;

long n, k, tong = 0;
static long a[1000000];

int main()
{
    freopen("BIEUTHUC.INP", "r", stdin);
	freopen("BIEUTHUC.OUT", "w", stdout);
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    tong += a[1];
    sort(a + 2, a + n + 1, greater<long>());
    for(int i = 2; i <= n; i++)
    {
        if(i <= k + 1)
            tong += a[i];
        else tong -= a[i];
    }
    cout << tong;
}