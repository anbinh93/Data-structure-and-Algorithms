/*#include<iostream>
using namespace std;
int main()
{
    //freopen("SECONDMAX.INP", "r", stdin);
	//freopen("SECONDMAX.OUT", "w", stdout);
	unsigned long long n;
	cin >> n;
	static int a[100000000];
	int aMax = 0;
	int aSMax = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if (a[i] > aMax) 
		{ 			
			aMax = a[i]; 
		}
		if (a[i] < aMax && a[i] > aSMax)aSMax = a[i];
	}
	cout << aSMax << endl;
	for (int i = 1; i <= n; i++)
	{
		if (aSMax == a[i])cout << i << " ";
	}
}*/