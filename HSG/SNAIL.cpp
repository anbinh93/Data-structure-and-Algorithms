#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen("SNAIL.INP", "r", stdin);
	freopen("SNAIL.OUT", "w", stdout);
	long long a, b, h, s = 0, ngay = 0;
	cin >> a >> b >> h;
	if (a < b)
	{
		cout << -1;
		return 0;
	}
	else
	{
		while (s < h)
		{
			ngay++;
			s += a - b;
		}
	}
	cout << s - 1;
}