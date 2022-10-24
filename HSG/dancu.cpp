#include<bits/stdc++.h>
using namespace std;

long n, m, dem = 0;
long t1, t2;
vector<long> a[100050];
bool dd[100050];

void tim(long p)
{
    dd[p] = true;
    for(long tam : a[p])
    {
        if(dd[tam] == false)
        {
            dd[tam] = true;
            tim(tam);
        }
    }
}

int main()
{
    freopen("dancu.INP", "r", stdin);
    freopen("dancu.OUT", "w", stdout);
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
            tim(i);
            dem++;
        }
    }
    cout << dem;
}