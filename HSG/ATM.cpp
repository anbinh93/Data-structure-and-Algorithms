#include <iostream>
#include <stdlib.h>
using namespace std;
long n, s, tong = 0;
static long a[1000000];
static long b[1000000];
void dq(long p)
{
	for (int i = 0; i <= 1; i++)
	{
		b[p] = i;
		if (p == n)
		{
			for (int j = 1; j <= p; j++)
			{
				tong += a[j] * b[j];
			}
			if (tong == s)
			{
				for (int j = 1; j <= p; j++)
				{
					if (b[j])
					{
						cout << a[j] << " ";
					}
				}
				exit(0);
			}
			tong = 0;
		}
		else dq(p + 1);
	}
}
int main()
{
	cin >> n >> s;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	dq(1);
	cout << -1;
}