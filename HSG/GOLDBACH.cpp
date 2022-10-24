#include<iostream>
#include<cstring>
using namespace std;

bool a[1000000];
void sang(long long n)
{
	for (int i = 2; i * i <= n; i++)
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
	long long n, x, b;
	
	freopen("GOLDBACH.INP", "r", stdin);
	freopen("GOLDBACH.OUT", "w", stdout);

	cin >> n;
	memset(a, true, sizeof(a));
	a[0] = a[1] = false;
	sang(1000000);
	x = b = n / 2;
	while (a[x] == false || a[b] == false)
	{
		x--; b++;
	}
	cout << x << " " << b;
}