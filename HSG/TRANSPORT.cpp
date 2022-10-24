#include<iostream>
using namespace std;

static long a[10000];
static long kq[1000][100000];
static long tong[10000];
long n, m, dapAn = -1;

long max(long a, long b)
{
	return (a > b) ? a : b;
}


void dq(int p)
{
	for (int i = 0; i <= 1; i++)
	{
		tong[p] = tong[p - 1] + a[p] * i;
		if (tong[p] >= m)
		{
			return;
		}
		else if (p == n)
		{
			dapAn = max(dapAn, tong[p]);
		}
		else dq(p + 1);
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	if (n <= 30 || m > 10e5)
	{
		dq(1);
		cout << dapAn;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				kq[i][j] = max(kq[i - 1][j], (j - a[i] > 0) ? kq[i - 1][j - a[i]] + a[i] : 0);
			}
		}
		cout << kq[n][m];
	}
}