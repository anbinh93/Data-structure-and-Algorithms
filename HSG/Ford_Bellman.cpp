#include <iostream>
#include <cstring>
#include <stdio.h>
#include <stack>
using namespace std;

long n, x, y;
bool dung = true;
static long a[10000][10000];
static long tv[1000000];
static long gt[1000000];
stack<long> s;

void tim()
{
    gt[x] = 0;
    for (int k = 1; k <= n - 1; k++)
    {
        dung = true;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (a[i][j] != 0)
                {
                    if (x != j && gt[j] > gt[i] + a[i][j])
                    {
                        gt[j] = gt[i] + a[i][j];
                        tv[j] = i;
                        dung = false;
                    }
                }
            }
        }
        if (dung == true)
            break;
    }
}

int main()
{
    freopen("Ford_Bellman.INP", "r", stdin);
    freopen("Ford_Bellman.OUT", "w", stdout);
    cin >> n >> x >> y;
    memset(gt, 1, sizeof(gt));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    tim();
    if (gt[y] == 72340172838076673)
    {
        cout << -1;
        return 0;
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << tv[i] << " " << gt[i] << endl;
    // }
    cout << gt[y] << endl;
    long tam = y;
    s.push(y);
    while (tam != x)
    {
        tam = tv[tam];
        s.push(tam);
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}