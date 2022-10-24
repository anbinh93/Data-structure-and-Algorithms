#include<iostream>
using namespace std;
int main()
{
	long n, a, b;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (i != 0 && a % b != 0)
		{
			cout << "Ko chia het";
			return 0;
		}
		b = a;
	}
	cout << "Chia het HT";
}