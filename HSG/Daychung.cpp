#include<iostream>
#include<cstring>
using namespace std;
static long l[1001][1001];
static long kq[1000000];
static long a[1000];
static long b[1000];
int m, n, chieuDai = -1;
long max(long u, long p)
{
	return (u > p) ? u : p;
}
void dat()
{
	for (int i = 1; i <= 1000; i++)
	{
		for (int j = 1; j <= 1000; j++)
		{
			l[i][j] = 1;
		}
	}
}
int main()
{
	cin >> m >> n;
	dat();
	memset(kq, -1, sizeof(kq));
	for (int i = 1; i <= m; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++)
	{
		cin >> b[i];
	}
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (a[i] == b[j]) 
				l[i][j] = l[i - 1][j - 1] + 1;

			else
				l[i][j] = max(l[i - 1][j], l[i][j - 1]);

			if (l[i][j] > chieuDai)
				chieuDai = l[i][j];

		}
		cout << endl;
	}
	cout << chieuDai << '\n';
	int i = m, j = n;
	while (i > 0 && j > 0)
	{
		if (a[i] == b[j])
		{
			kq[chieuDai] = a[i];
			chieuDai--; i--; j--;
		}
		else if (l[i][j] == l[i][j - 1])
		{
			j--;
		}
		else i--;
	}
	int u = 1;
	while (kq[u] != -1)
	{
		cout << kq[u] << " ";
		u++;
	}
}