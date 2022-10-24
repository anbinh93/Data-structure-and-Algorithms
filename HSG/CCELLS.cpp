#include <iostream>
using namespace std;

int UCLN(unsigned long long m, unsigned long long n)
{
	if (n == 0) return m;
	return UCLN(n, m % n);
}

int main()
{
	freopen("CCELLS.INP", "r", stdin);
	freopen("CCELLS.OUT", "w", stdout);
	unsigned long long m, n, p;
	cin >> m >> n;
	p = UCLN(m, n);
	cout << m + n - p;
}
