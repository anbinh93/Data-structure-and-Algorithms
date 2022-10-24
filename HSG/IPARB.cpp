#include<iostream>
using namespace std;

static unsigned long long f[10000][10000];
long n;

int main()
{
	freopen("IPARB.INP", "r", stdin);
	freopen("IPARB.OUT", "w", stdout);
	cin >> n; f[0][0] = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i > j)
			{
				f[i][j] = f[i - 1][j];
			}
			else
			{
				f[i][j] = f[i - 1][j] + f[i][j - i];
			}
			//cout << f[i][j] << " ";
		}
		//cout << endl;
	}
	cout << f[n][n];
}