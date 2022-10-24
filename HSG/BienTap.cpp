#include<iostream>
using namespace std;
bool soChinhPhuong(long n)
{
	return ((int)sqrt(n) * (int)sqrt(n) == n);
}
int main()
{
	long n, dem = 0;
	cin >> n;
	while (true)
	{
		if (soChinhPhuong(n)) { break; }
		if (soChinhPhuong(n / 3 + n % 3)) { break; }
		n--; dem++;
	}
	cout << dem;
}