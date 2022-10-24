#include<bits/stdc++.h>
using namespace std;

long n, m;
long t1, t2;
vector<long> a[100050];
bool dd[100050];
bool mau[100050];
long tv[100050];
map<long, map<long, long>> cung;

void kq(long i)
{
    long tam1 = tv[i];
    long tam2 = i;
	stack<long> s;

    while (tam1 != tam2)
    {
        s.push(tam1);
        tam1 = tv[tam1];
    }
    s.push(i);
    while (!s.empty())
    {
        tam1 = s.top();
        s.pop();
        //cout << tam1 << " " << s.top() << endl;
        if (!s.empty())
            cout << cung[tam1][s.top()] << " ";
        else
            cout << cung[tam1][i] << endl;
    }
    exit(0);
}

void DFS(long k)
{
	mau[k] = true;
	dd[k] = true;
	for(auto i : a[k])
	{
		if(dd[i] == false)
		{
			tv[i] = k;
			dd[i] = true;
			DFS(i);
		}
		else if(mau[i] == true)
		{
			tv[i] = k;
			cout << "YES" << '\n';
			kq(i);
		}
	}
	mau[k] = false;
}

int main()
{
	freopen("CIRMES.INP", "r", stdin);
	freopen("CIRMES.OUT", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= m; i++)
	{
		cin >> t1 >> t2;
		cung[t1][t2] = i;
		a[t1].push_back(t2);
	}
	for(int i = 1; i <= n; i++)
	{
		if(dd[i] != true)
		{
			DFS(i);
		}
	}
	cout << "NO";
}