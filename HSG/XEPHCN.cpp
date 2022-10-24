#include<iostream>
#include<algorithm>
#include <stdio.h>

using namespace std;

struct hop
{
	long dai, rong;
};

bool ss(hop h1, hop h2)
{
	if (h1.dai < h2.dai)return true;
	if (h1.dai == h2.dai && h1.rong < h2.rong)return true;
	return false;
}

long n, tam1, tam2;
hop tam;
long dem = 1;
static hop a[100000000];

int main()
{
	//freopen("XEPHCN.INP", "r", stdin);
	//freopen("XEPHCN.OUT", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> tam1 >> tam2;
		if (tam1 > tam2)
		{
			a[i].rong = tam2;
			a[i].dai = tam1;
		}
		else
		{
			a[i].rong = tam1;
			a[i].dai = tam2;
		}
	}
	sort(a + 1, a + n + 1, ss);
	tam = a[1];
	for (int i = 2; i <= n; i++)
	{
		if (a[i].rong > tam.rong && a[i].dai > tam.dai)
		{
			tam = a[i];
			dem++;
		}
	}
	cout << dem;
}