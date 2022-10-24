#include<bits/stdc++.h>
using namespace std;

long n;
bool a[1000000];
bool b[1000000];

void sang(long long n)
{
	for (int i = 2; i * i<= n; i++)
	{
		if (a[i])
		{
			for (int j = i * i; j <= n; j += i)
			{
				a[j] = false;
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	freopen("DAYSO.INP", "r", stdin);
	freopen("DAYSO.OUT", "w", stdout);
	
	memset(a, true, sizeof(a));
	a[0] = a[1] = false;
    sang(1000000);

	cin >> n;
	b[n] = true;
	for(int i = n; i >= 1; i--)
	{
		if(b[i] == true)
		{ 
			for(int j = 1; j <= sqrt(i); j++)
			{ 
				if(i % j == 0)
					b[j] = b[i/j] = true;
			}
		}
		else if(a[i] == true)
		{ 
			b[i] = true;
		}
	}
	for(int i = n; i >= 1; i--)
	{
		if(b[i] == true)
		{ 
			cout << i << " ";
		}
	}
}