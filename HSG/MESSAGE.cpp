#include <bits/stdc++.h>
using namespace std;

long n, m, tam1, tam2, da = 0;
static vector<long> a[1000000];
static bool dd[1000000];
static long r[1000000];
vector<long> s;

void DFS(long dinh, long goc)
{
    for (long i : a[dinh])
    {
        if (dd[i] == false)
        {
            dd[i] = true;
            r[i] = goc;
            DFS(i, goc);
        }
        else if (r[i] != goc && r[i] == i)
        {
            //s.remove(i);
            da--;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("MESSAGE.INP", "r", stdin);
    //freopen("MESSAGE.OUT", "w", stdout);
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> tam1 >> tam2;
        a[tam1].push_back(tam2);
    }
    for (int i = 1; i <= n; i++)
    {
        if (dd[i] == false)
        {
            s.push_back(i);
            da++;
            dd[i] = true;
            r[i] = i;
            DFS(i, i);
        }
    }
    cout << da << endl;
    for (long i : s)
    {
        cout << i << " ";
    }
}

#include <bits/stdc++.h>
using namespace std;
int d[100001], n, m, kq, x, y, k[100001], r[100001], rt;
vector<int> a[100001];
void dfs(int i, int p)
{
    if (d[i])
    {
        if (k[i] && d[r[i]] == 2)
        {
            d[r[i]] = 1;
            kq--;
        }
        return;
    }
    d[i] = 1;
    r[i] = rt;
    for (int j = 0; j < a[i].size(); j++)
    {
        if (a[i][j] == rt)
            k[i] = 1;
        dfs(a[i][j], i);
    }
    k[p] |= k[i];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("message.inp", "r", stdin);
    freopen("message.out", "w", stdout);
    cin >> n >> m;
    while (m--)
    {
        cin >> x >> y;
        a[x].push_back(y);
    }
    for (int i = 1; i <= n; i++)
        if (d[i] == 0)
        {
            rt = i;
            dfs(i, 0);
            k[i] = 1;
            d[i] = 2;
            kq++;
        }
    cout << kq << '\n';
    for (int i = 1; i <= n; i++)
        if (d[i] == 2)
            cout << i << " ";
}
