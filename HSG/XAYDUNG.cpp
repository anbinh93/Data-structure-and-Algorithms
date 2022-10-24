#include <iostream>
#include <queue>
#include <stdio.h>
#include <algorithm>
#include <cstring>
using namespace std;

long tam1, tam2, tam3;
long n, m;
queue<long> q;
static long a[10000][10000];
static bool dd[1000000];
static long gt[1000000];

void tim(long dinh)
{
    q.push(dinh);
    while (!q.empty())
    {
        dd[q.front()] = true;
        for (int i = 1; i <= n; i++)
        {
            if (dd[i] == false && a[q.front()][i] != 0)
            {
                if (gt[i] > gt[q.front()] + a[q.front()][i])
                {
                    gt[i] = gt[q.front()] + a[q.front()][i];
                }
                q.push(i);
            }
        }
        q.pop();
    }
}

int main()
{
    //freopen("XAYDUNG.INP", "r", stdin);
    //freopen("XAYDUNG.OUT", "w", stdout);
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> tam1 >> tam2 >> tam3;
        a[tam1][tam2] = tam3; a[tam2][tam1] = tam3;
    }
    memset(gt, 1, sizeof(gt));
    memset(dd, 0, sizeof(dd));
    gt[1] = 0;
    tim(1);
    cout << *max_element(gt + 1, gt + n + 1);
}