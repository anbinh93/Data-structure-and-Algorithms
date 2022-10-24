#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
int main()
{
	long long n, s;
	static long long so[10000000];
	cin >> n >> s;	
	memset(so, 0, sizeof(so));
	for (int i = n; i >= 1; i--)
	{
		if (s > 9) 
		{
			so[i] = 9; 
			s -= 9; 
		}
		else
		{
			if (i == 1)
			{
				so[i] = s;
			}			
			else
			{				
				so[i] = s - 1;
				so[1] = 1;				
			}
			break;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cout << so[i];
	}
}