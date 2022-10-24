#include <bits/stdc++.h>
using namespace std;

long n, s, t;
static vector<pair<long long, long long>> a[1000000];
priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> q;
bool dd[1000];
long long b[1000];
long tv[10000];

long tam1, tam2;
stack<long> _s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("DULICH.INP", "r", stdin);
    //freopen("DULICH.OUT", "w", stdout);
    memset(b, 1, sizeof(b));
    cin >> n >> s >> t;
    b[s] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> tam1;
            if(tam1 == 0) continue;
            a[i].push_back(make_pair(j, tam1));
        }
    }
    q.push(make_pair(s, 0));
    while (!q.empty())
    {
        pair<long long, long long> tam = q.top();
        dd[tam.first] = true;
        q.pop();
        if (b[tam.first] != tam.second)
            continue;
        for (pair<long long, long long> p : a[tam.first])
        {
            if (b[p.first] > p.second + tam.second)
            {
                b[p.first] = tam.second + p.second;
                if(dd[p.first] == true)
                    continue;
                q.push(make_pair(p.first, b[p.first]));
            }
        }
    }
    if (b[t] > 10e10)
        cout << "KHONG";
    else
    {
        cout << b[t];
        tam1 = tv[t];
        while (tam1 != s)
        {
            _s.push(tam1);
            tam1 = tv[tam1];
        }
        _s.push(s);
        while (!_s.empty())
        {
            cout << _s.top() << " ";
            _s.pop();
        }
    }
}