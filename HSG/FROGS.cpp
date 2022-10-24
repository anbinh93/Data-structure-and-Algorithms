#include <iostream>
#include <stdio.h>
#include <deque>
using namespace std;

long n, m, k;
deque<long> q;
static long a[10000][10000];

long tim(long p, long trai, long phai)
{
    for (int i = 1; i <= n; i++)
    {
        while (!q.empty() && a[p][q.back()] >= a[p][i])
            q.pop_back();
        q.push_back(i);
        while (q.front() + k <= i)
            q.pop_front();
        if (i >= k)
        {
            return a[p][q.front()];
        }
    }
}

int main()
{
    //freopen("FROGS.INP", "r", stdin);
    //freopen("FROGS.OUT", "w", stdout);
    cin >> m >> n >> k;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
}