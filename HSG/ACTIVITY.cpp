#include <iostream>
using namespace std;

long n, m, k, a, b, t, x, y, l, p;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	
	for (int i = 0; i < t; i++) 
	{
		cin >> m >> n >> k >> a >> b;		
		l = m / a;
		p = n / b;
		if (l > p) y = p;
		else y = l;
		x = m % a + n % b + (l - y) * a + (p - y) * b;
		if(x < k)
		{
			if((k - x) > (a + b))
			{
				if((k - x) % (a + b) != 0)y -= (k - x) / (a + b) + 1;
				else y -= (k - x) / (a + b);
			}
			else y--;	
			cout << y << '\n';
		}
		else
		{
			cout << y << '\n';
		}
	}
}