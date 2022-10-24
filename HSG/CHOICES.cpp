#include <bits/stdc++.h>
using namespace std;

long n, k, dem = 0;
bool a[100];
long b[100];

void dq(long p)
{
    for(int i = 0; i <= 1; i++)
    { 
        a[p] = i;
        b[p] = b[p - 1] + i;
        if(b[p] > k)
        {
            return;
        }
        else if (p == n)
        { 
            if(b[p] == k)
                dem++;
        }
        else dq(p + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    freopen("CHOICES.INP", "r", stdin);
	freopen("CHOICES.OUT", "w", stdout);

    cin >> n >> k;
    dq(1);
    cout << dem;
}