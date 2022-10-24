#include <iostream>
#include <vector>
#include <utility>
#include <cstring>
#include <queue>
using namespace std;

long long n, m;
long long tam1, tam2, tam3;
static long long gt[1000008];
static bool dd[1000008];
static vector<pair<long long, long long>> a[1000000];
priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> q;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("DIJKSTRA.INP", "r", stdin);
    //freopen("DIJKSTRA.OUT", "w", stdout);
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> tam1 >> tam2 >> tam3;
        a[tam1].push_back(make_pair(tam2, tam3));
    }
    memset(gt, 1, sizeof(gt));
    q.push(make_pair(1, 0));
    gt[1] = 0;
    while (!q.empty())
    {
        pair<long long, long long> tam = q.top();
        q.pop();
        if (gt[tam.first] != tam.second)
            continue;
        for (pair<long long, long long> p : a[tam.first])
        {
            if (gt[p.first] > p.second + tam.second)
            {
                gt[p.first] = tam.second + p.second;
                q.push(make_pair(p.first, gt[p.first]));
            }
        }
    }
    if (gt[n] > 10e10)
        cout << -1;
    else
        cout << gt[n];
}