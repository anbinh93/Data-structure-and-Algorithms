/*#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("SORT.INP", "r", stdin);
	freopen("SORT.OUT", "w", stdout);
	long long n, k = 0;
	static long long a[10000000];
	while(cin >> n)
	{
		a[k] = n; k++;
	}
	sort(a, a + k);
	for (int i = 0; i < k; i++)
	{
		cout << a[i] << "\n";
	}
}*/