#include<iostream>
using namespace std;
long n, dem = 0, dem_m = 0;
int a[51];
long tong[10000];
void dq(int p)
{
	for (int i = 0; i <= 1; i++)
	{
		if(i == 0)tong[p] = tong[p - 1] + 1;
		if(i == 1)tong[p] = tong[p - 1] + 2;
		if (tong[p] > n - 1)return;
		a[p] = i;
		if (tong[p] == n - 1)
		{
			dem++;
			for (int j = 1; j <= n - 1; j++)
			{
				if (dem_m >= n - 1)break;
				if (a[j] == 0) { cout << 'O'; dem_m += 1; }
				else if (a[j] == 1) { cout << 'T'; dem_m += 2; }
			}
			dem_m = 0;
			cout << endl;
		}
		else if (p == n - 1)return;
		else dq(p + 1);
	}
}
int main()
{
	cin >> n;
	dq(1);
	cout << dem;
}