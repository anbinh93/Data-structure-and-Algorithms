#include<iostream>
#include<string>
#define ll long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ll m, n, a, b, dem = 0;
	cin >> m >> n >> a >> b;
	for (int i = m; i <= n; i++)
	{
		if (i % a == 0 && i % b == 0) dem++;
	}
	cout << dem;
}