#include<iostream>
#include<algorithm>
using namespace std;
struct thung
{
	long dai; long rong; long cao; bool mat;
};
bool ss(thung t1, thung t2)
{
	if (t1.cao < t2.cao && t1.rong < t2.rong && t1.dai < t2.dai)return true;
	if (t1.cao == t2.cao && t1.dai < t2.dai && t1.rong < t2.rong)return true;
	if (t1.cao < t2.cao && t1.dai == t2.dai && t1.rong < t2.rong)return true;
	if (t1.cao < t2.cao && t1.dai < t2.dai && t1.rong == t2.rong)return true;
	return false;
}
int main()
{
	long n = 0, k, m, l, dem = 0;
	static thung a[1000000];
	while (cin >> k >> m >> l)
	{
		a[++n] = { k, m, l, false };
		if (n == 7)break;
	}
	sort(a, a + n, ss);
	for (int i = 0; i < n; i++)
	{
		cout << a[i].dai << " " << a[i].rong << " " << a[i].cao << '\n';
		if(a[i].dai < a[i + 1].dai &&
		   a[i].rong < a[i + 1].rong &&
		   a[i].cao < a[i + 1].cao &&
		   a[i].mat != true &&
		   a[i + 1].mat != true)
		{
			a[i].mat = true;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i].mat == false)
		{
			dem++;
		}
	}
	cout << dem;
}