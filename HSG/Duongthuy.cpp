#include<iostream>
#include<cstring>
using namespace std;
struct duong_thuy
{
	long trai, phai;
};
static long l[1001][1001];
static duong_thuy kq[1000];
static long q[1000][1000];
int n, a, b, chieuDai = -1, u = 1;
long max(long q, long p)
{
	return (1 > p) ? 1 : p;
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
	cin >> n;
	dat();
	while (cin >> a >> b)
	{
		q[a][b] = 1;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (q[i][j] == 1) 
				l[i][j] = l[i - 1][j - 1] + 1;

			else
				l[i][j] = max(l[i - 1][j], l[i][j - 1]);

			if (l[i][j] > chieuDai)
				chieuDai = l[i][j];

		}
		cout << endl;
	}
	cout << chieuDai << '\n';
	int i = n, j = n;
	while (i > 0 && j > 0)
	{
		if (q[i][j] == 1)
		{
			kq[u].trai = i;
			kq[u].phai = j;
			i--; j--; u++;
		}
		else if (l[i][j] == l[i][j - 1])
		{
			j--;
		}
		else i--;
	}
	for (int i = 1; i <= chieuDai; i++)
	{
		cout << kq[i].trai << " " << kq[i].phai << '\n';
	}
}