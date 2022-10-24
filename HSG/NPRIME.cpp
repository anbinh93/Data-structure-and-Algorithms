#include <bits/stdc++.h>
using namespace std;

long long n;

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

    freopen("NPRIME.INP", "r", stdin);
	freopen("NPRIME.OUT", "w", stdout);

    cin >> n;
    long long tam = sqrt(n);

    while(true)
    {
        if(isPrime(tam) && tam*tam >= n)
        {
            cout << tam*tam;
            return 0;
        }
        tam++;
    }
}