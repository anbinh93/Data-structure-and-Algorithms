/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long so, tong = 0;
	cin >> so;
	for (int i = 1; i <= sqrt(so); i++)
	{
		if (so % i == 0) 
		{
			if (so / i == i) tong += i;
			else tong += (so / i + i);
		}
	}
	cout << tong;
}*/