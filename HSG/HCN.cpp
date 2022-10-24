#include <bits/stdc++.h>
using namespace std;

long n;
long x, y, u, v;
vector <pair<int, int>> trai, phai;

int main()
{
    
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> x >> y >> u >> v;
        trai.push_back({x, -i});
        phai.push_back({u, i});
    }

    sort(trai.begin(), trai.end());
    sort(phai.begin(), phai.end());

    cout << max(0, trai.back().first - phai.front().first) << '\n'
         << min(-trai.back().second, phai.front().second) << ' '
         << max(-trai.back().second, phai.front().second);
}

