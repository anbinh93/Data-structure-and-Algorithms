#include<bits/stdc++.h>
using namespace std;

bool a[1000000];
long long n; 

void sang(long long n)
{
	for (int i = 2; i * i<= n; i++)
	{
		if (a[i])
		{
			for (int j = i * i; j <= n; j += i)
			{
				a[j] = false;
			}
		}
	}
}

int main()
{ 
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    freopen("LPRIME.INP", "r", stdin);
	freopen("LPRIME.OUT", "w", stdout);

    memset(a, true, sizeof(a));
	a[0] = a[1] = false;
    sang(1000000);

    cin >> n;
    
    while(n >= 2)
    {
        if(a[n] == true){
            cout << n;
            return 0;
        }
        n--;
    }
}