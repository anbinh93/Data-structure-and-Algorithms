#include <iostream>
using namespace std;

string a;
long x, max_length = 0, index = -1, n;

bool SNT(int n)	
{
	if(n < 2)
		return 0;

	for(int i = 2; i * i <= n; i++)	
	{
		if(n % i == 0)
			return 0;
	}

	return 1;
}

int main() 
{
	cin >> x;
	for (int i = 1; i <= x; i++)
	{
		cin >> a;
	}
	n = a.length();

	for(int i = 0; i < n; i++)	
	{
		if(SNT(a[i] - 48))	
		{

			int length = 1,temp_index = i;
			while(SNT(a[i + 1] - 48))	
			{

				length++;
				i++;
			}

			if(max_length < length)	
			{

				max_length = length;
				index = temp_index;
			}
		}
	}
	cout << max_length << endl;
	return 0;
}
