#include<bits/stdc++.h>
using namespace std;

bool x, y;
long a;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
  
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (long long i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    freopen("NEAREST.INP", "r", stdin);
	freopen("NEAREST.OUT", "w", stdout);

    cin >> a;
    for(long i = 0; i <= 1000000; i++)
    {
        x = isPrime(a - i);
        y = isPrime(a + i);
        if(x && y)
        {
            cout << min(a - i, a + 1);
            return 0;
        }
        else if (x || y)
        {
            cout << (x ? a - i : a + i);
            return 0;
        }
    }
}