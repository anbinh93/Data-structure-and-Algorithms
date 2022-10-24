#include<bits/stdc++.h>
using namespace std;

long long n, a, b;
long sa, sb;

int so(long long n) 
{
  return floor(log10(n) + 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("SUFFIX.INP", "r", stdin);
    freopen("SUFFIX.OUT", "w", stdout);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        sa = so(a); sb = so(b);

        if(sa == sb && a == b)
        {
            cout << "YES" << '\n';
        }
        else if(sa > sb && a % (long)pow(10, sb) == b)
        {
            cout << "YES" << '\n';
        }
        else 
        {
            cout << "NO" << '\n';
        }
    }
}