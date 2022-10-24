#include <iostream>
#include <math.h>
#include <queue>
#include <cstring>
#include <stdio.h>
using namespace std;

int n;
long _min = 1000000000, _max = 9999999999;
long dem = 0;
static bool nt[10000000];
queue<long> q;

void sang()
{
    for (int p = 2; p * p <= 10000000; p++)
    {
        if (nt[p] == false)
        {
            for (int i = p * p; i <= 10000000; i += p)
                nt[i] = true;
        }
    }
}

bool snt(long p)
{
    if (nt[p] == false)
        return false;
    for (int i = 1; i <= (int)log10(p); i++)
    {
        if (nt[(long)(p / pow(10, i))] == false)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("SIEUNT.INT", "r", stdin);
    freopen("SIEUNT.OUT", "w", stdout);
    cin >> n;
    sang();
    nt[1] = false;
    _min = (long)(_min / pow(10, (long)log10(_min) - n + 1));
    _max = (long)(_max / pow(10, (long)log10(_max) - n + 1));
    for (int i = _min; i <= _max; i++)
    {
        if (snt(i))
        {
            dem++;
            q.push(i);
        }
    }
    cout << dem << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}