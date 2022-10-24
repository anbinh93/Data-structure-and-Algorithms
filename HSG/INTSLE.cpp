#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	//freopen("INTSLE.INP", "r", stdin);
	//freopen("INTSLE.OUT", "w", stdout);
	static long long a, b, c, a1, b1, c1, boDuLieu, d, dx, dy;
	cin >> boDuLieu;
	for (int i = 0; i < boDuLieu; i++)
	{
		cin >> a >> b >> c >> a1 >> b1 >> c1;
		d = a * b1 - a1 * b;
		dx = c * b1 - c1 * b;
		dy = a * c1 - a1 * c;
		if (d != 0)
		{
			cout << dx / d << " " << dy / d << endl;
		}
		else
		{
			if (dx != 0 || dy != 0)
			{
				cout << "NO SOLUTION" << endl;
			}
			else if (dx == 0 && dy == 0)
			{
				cout << "INFINITE" << endl;
			}
		}
	}
}