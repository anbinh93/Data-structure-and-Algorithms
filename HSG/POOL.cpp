#include <iostream>
#include <queue>
using namespace std;

priority_queue<long, vector<long>, greater<int>> q;
static long a[1000000];
long n, k, tam, tam1, tam2;

bool kt(long t)
{
    long tam = 0;
    for (int i = 1; i <= t; i++)
    {
        q.push(a[i]);
    }
    for (int i = t + 1; i <= n; i++)
    {
        tam = q.top() + a[i];
        q.pop();
        if (tam > k)
            return false;
        q.push(tam);
    }
    return true;
}

int main()
{
    //freopen("POOL.INP", "r", stdin);
    //freopen("POOL.OUT", "w", stdout);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    tam1 = 1;
    tam2 = n;
    while (tam1 <= tam2)
    {
        tam = (tam1 + tam2) / 2;
        if (kt(tam))
        {
            tam2 = tam - 1;
        }
        else
        {
            tam1 = tam + 1;
        }
    }
    cout << tam1;
}