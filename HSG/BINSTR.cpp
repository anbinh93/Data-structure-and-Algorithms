#include<iostream>
using namespace std;
static int a[10000000];
long dem = 1, n;
void DCMNQ(long p)
{
	for (int i = 0; i <= 1; i++)
	{
		a[p] = i;
		if (n == p)
		{
			for (int i = 1; i <= n; i++)
			{
				cout << a[i];
			}
			cout << '\n';
		}
		else DCMNQ(p + 1);
	}
}
int main()
{
	freopen("BINSTR.INP", "r", stdin);
	freopen("BINSTR.OUT", "w", stdout);
	cin >> n;
	DCMNQ(1);
}