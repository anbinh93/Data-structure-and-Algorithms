#include<iostream>
#include<algorithm>
using namespace std;

long n, m;
static long a[1000000];

int main()
{
    freopen("MERGE.INP", "r", stdin);
    freopen("MERGE.OUT", "w", stdout);
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = n + 1; i <= m + n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + m + 1);
    for(int i = 1; i <= m + n; i++)
    {
        cout << a[i] << " ";
    }
}