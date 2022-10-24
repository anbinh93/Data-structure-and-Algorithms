#include<bits/stdc++.h>
using namespace std;

long a, b;
long dem = 0;

int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    freopen("SQRCUT.INP", "r", stdin);
	freopen("SQRCUT.OUT", "w", stdout);

    cin >> a >> b;
    while(true)
    {
        if(a == 0 || b == 0)
        { break;}
        if(a >= b)
        { 
            a -= b;
            dem++;
        }
        else 
        {
            b -= a;
            dem++;
        }
    }
    cout << dem;
}