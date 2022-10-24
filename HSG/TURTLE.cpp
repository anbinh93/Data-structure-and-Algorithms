/*#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//freopen("TURTLE.INP", "r", stdin);
	//freopen("TURTLE.OUT", "w", stdout);
	long long a, b, c, d;
	long long max = 0, min = 10e9, max2 = 0, min2 = 0;
	long long m[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> m[i];
		if(m[i] > max)
		{
			max2 = max;
			max = m[i];
		}
		else if (m[i] > max2 && m[i] != max)
			max2 = m[i];
		if(m[i] < min)
		{
			min2 = min;
			min = m[i];
		}
		else if (m[i] < min2 && m[i] != min)
			min2 = m[i];
	}
	cout << max2 * min;
}*/