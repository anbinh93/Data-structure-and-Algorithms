#include <bits/stdc++.h>
using namespace std;

int n, m;
pair<int, int> a[110];
int f[105][105][105];

int cal(int x, int y, int t)
{
    if (f[x][y][t] >= 0)
        return f[x][y][t];
    if (x > y)
        return f[x][y][t] = 0;
    if (a[x].second <= a[t].second)
        return f[x][y][t] = cal(x + 1, y, t);
    if (a[y].second <= a[t].second)
        return f[x][y][t] = cal(x, y - 1, t);
    if (a[x].first == a[y].first)
        return f[x][y][t] = 1;

    f[x][y][t] = 1e9;

    int k = m / (a[y].first - a[x].first);
    int s = 0;
    for (int i = x; i <= y; ++i)
        if (a[i].second <= k && a[i].second > a[s].second)
            s = i;

    if (a[s].second > a[t].second)
        f[x][y][t] = cal(x, y, s) + 1;
    for (int i = x; i < y; ++i)
        f[x][y][t] = min(f[x][y][t], cal(x, i, t) + cal(i + 1, y, t));

    return f[x][y][t];
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        cin >> a[i].first >> a[i].second;

    sort(a + 1, a + 1 + n);
    memset(f, -1, sizeof(f));
    cout << cal(1, n, 0);
}