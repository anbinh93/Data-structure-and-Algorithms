#include<iostream>
#include<stdio.h>
#include<queue>
#include<stack>
using namespace std;

long n, m, k;
long dem1, dem2, dem3;
static bool a[10000][10000];
static bool dd[10000000];
static long tv[10000000];
queue<long> q;
stack<long> s;

void tim(long diem)
{
	long tam;
	q.push(diem);
	dd[diem] = true;
	while (!q.empty())
	{
		tam = q.front();
		dd[tam] = true;
		if (tam == n)
		{
			return;
		}
		for (int i = 1; i <= n; i++)
		{
			/*cout << dd[i] << " " << a[tam][i] << " ";
			cout << tam << " " << i << endl;*/
			if (dd[i] == false && a[tam][i] == true)
			{
				q.push(i);
				tv[i] = tam;
				dd[i] = true;
				
			}
		}
		q.pop();
	}
}

int main()
{
	freopen("flowers.INP", "r", stdin);
	freopen("flowers.OUT", "w", stdout);
	cin >> n >> m >> k;
	dem3 = k;
	for (int i = 1; i <= m; i++)
	{
		cin >> dem1 >> dem2;
		a[dem1][dem2] = a[dem2][dem1] = true;
	}
	tim(1);
	long tam = tv[n];
	s.push(n);
	while(tam != 1)
	{
		s.push(tam);
		tam = tv[tam];
	}
	s.push(1);
	cout << k - s.size() + 2 << endl; 
	for (int i = 1; i <= s.size(); i++)
	{
		cout << s.top() << " ";
		s.pop();
	}
	cout << n;
}