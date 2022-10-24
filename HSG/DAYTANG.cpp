#include<iostream>
#include<string>
#define l long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	l n, dem = 0, viTri = 0, lonNhat = 0, viTriTam = 0;
	bool layViTri = false;
	static long a[200005];
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++)
	{
		if (a[i] <= a[i + 1]) 
		{
			dem++;			
			if (!layViTri)
			{
				viTriTam = i;
				layViTri = true;
			}
		}
		else
		{
			if (dem > lonNhat)
			{
				lonNhat = dem;
				viTri = viTriTam;
			}
			dem = 0; layViTri = false;
		}
	}
	cout << viTri << ' ' << lonNhat + 1;
}