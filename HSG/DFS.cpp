#include<bits/stdc++.h>
using namespace std;

long n, m, s, t;
long t1, t2;
vector<long> a[100050];
bool dd[100050];
long tv[100050];
stack<long> st;

void KQ()
{
    while(tv[t] != 0)
    {
        st.push(t);
        t = tv[t];
    }
    cout << s << " ";
    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop(); 
    }
}

void DFS(long p)
{
    dd[p] = true;
    for(long tam : a[p])
    {
        if(dd[tam] == false)
        {
            tv[tam] = p;
            if(tam != t)
            {
                dd[tam] = true;
                DFS(tam);
            }
            else
            {
                KQ();
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("DFS.INP", "r", stdin);
    freopen("DFS.OUT", "w", stdout);
    cin >> n >> m >> s >> t;
    for(int i = 1; i <= m; i++)
    {
        cin >> t1 >> t2;
        a[t1].push_back(t2);
    }
    for(int i = 1; i <= n; i++)
    {
        sort(a[i].begin(), a[i].end());
    }
    DFS(s);
}