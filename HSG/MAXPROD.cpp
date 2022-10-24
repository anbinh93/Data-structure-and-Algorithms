#include<iostream>
using namespace std;
int main()
{
	freopen("MAXPROD.INP", "r", stdin);
	freopen("MAXPROD.OUT", "w", stdout);
	long long n;
	cin >> n;
	static int a[100000000];
	long long aMax = 0; long long aMin = 0;
	long long aSMax = 0; long long aSMin = 0;
	int count = 0; int count2 = 0;
	for (long long i = 1; i <= n; i++)
	{
		cin >> a[i];
		if (a[i] > aMax)
		{
			aSMax = aMax;
			aMax = a[i];
		}
		else if (a[i] > aSMax && a[i] != aMax) aSMax = a[i];
		if (a[i] < aMin)
		{
			aSMin = aMin;
			aMin = a[i];
		}
		else if (a[i] < aSMin && a[i] != aMin) aSMin = a[i];
	}
	for (long long i = 1; i <= n + 1; i++)
	{
		if (a[i] > aSMax && a[i] == aMax) count++;
		if (a[i] < aSMin && a[i] == aMin) count2++;
	}
	if (count >= 2)
	{
		aSMax = aMax;
	}
	if (count2 >= 2)
	{
		aSMin = aMin;
	}
	if ((aSMax * aMax) > (aMin * aSMin))
	{
		cout << aSMax * aMax;
	}
	else cout << aMin * aSMin;
}