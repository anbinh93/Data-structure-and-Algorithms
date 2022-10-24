#include<bits/stdc++.h>
using namespace std;

long long n, q, tam;
map<long long, long long> tt;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("LUCKY.INP", "r", stdin);
    freopen("LUCKY.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> tam;
        tt[tam] += 1;
    }
    cin >> q;
    for(int i = 1; i <= q; i++)
    {
        cin >> tam;
        cout << tt[tam] << '\n';
    }
}

