#include<bits/stdc++.h>
using namespace std;

long n, m, dem = 0;
long t1, t2;
vector<long> a[100050];
vector<long> da[100050];
bool dd[100050];

void tim(long p)
{
    dd[p] = true;
    for(long tam : a[p])
    {
        if(dd[tam] == false)
        {
            da[dem].push_back(tam);
            dd[tam] = true;
            tim(tam);
        }
    }
}

int main()
{
    freopen("CONNECT.INP", "r", stdin);
    freopen("CONNECT.OUT", "w", stdout);
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        cin >> t1 >> t2;
        a[t1].push_back(t2);
        a[t2].push_back(t1);
    }
    for(int i = 1; i <= n; i++)
    {
        if(dd[i] == false)
        {
            dem++;
            da[dem].push_back(i);
            tim(i);
        }
    }
    for(int i = 1; i <= dem; i++)
    {
        sort(da[i].begin(), da[i].end());
        for(long tam : da[i])
        {
            cout << tam << " ";
        }
        cout << "\n";
    }
}