#include <iostream>
#include <cmath>
using namespace std;

long n, k;
static long a[1000000];
static bool b[1000000];	
static long tong[1000000];

void tim(long p)
{
	for(int i = 0; i <= 1; i++) 
	{
		b[p] = i;
		tong[p] = tong[p - 1] + ((i == 0) ? a[p] : -a[p]);
		if(p == n)
		{
			if(tong[p] == k)
			{
				for(int j = 2; j <= p; j++)
				{
					cout << ((b[j] == 0) ? '+' : '-');
				}
				exit(0);
			}
		}
		else 
			tim(p + 1);
	}
}

int main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	tong[1] = a[1];
	tim(2);
}