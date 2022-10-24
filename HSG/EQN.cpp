#include <bits/stdc++.h>
using namespace std;
map<long long, long long> M;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("eqn.inp", "r", stdin);
    freopen("eqn.out", "w", stdout);
    int n, a[1000009], dem = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (M[a[j] - a[i]])
                dem++;
            if (M[a[i] + a[j]])
                dem++;
        }
        M[a[i]] = i;
    }
    cout << dem * 2;
}