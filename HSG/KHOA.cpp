#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <stdio.h>
using namespace std;

long n, m;
long tam, dem = 0;
static vector<long> a[1000000];
static bool dd[1000000];

void DFS(long dinh)
{
    dd[dinh] = true;
    for (long i : a[dinh])
    {
        if (dd[i] == false)
        {
            dd[i] = true;
            DFS(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("KHOA.INP", "r", stdin);
    // freopen("KHOA.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> tam;
        a[tam].push_back(i);
        a[i].push_back(tam);
    }
    for (int i = 1; i <= n; i++)
    {
        sort(a[i].begin(), a[i].end());
    }
    for (int i = 1; i <= n; i++)
    {
        if (dd[i] == false)
        {
            cout << i << endl;
            dem++;
            DFS(i);
        }
    }
    cout << dem;
}