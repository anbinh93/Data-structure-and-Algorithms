#include <iostream>
#include <stdio.h>
#include <string>
#include <queue>
using namespace std;

long n, tam1 = 0, tam2 = 0, da = 0;
string _tam;
long a[21];
bool b[21];
queue<string> tam;

void dq(long p)
{
    for (int i = 0; i <= 1; i++)
    {
        b[p] = i;
        if (p == n)
        {
            for (int j = 1; j <= n; j++)
            {
                if (b[j])
                    tam1 += a[j];
                else
                {
                    tam2 += a[j];
                }
            }
            if (tam1 == tam2)
            {
                for (int j = 1; j <= n; j++)
                {
                    _tam += ((b[j] == true) ? "B " : "A ");
                }
                tam.push(_tam);
                da++;
            }
            tam1 = 0;
            tam2 = 0;
            _tam = "";
        }
        else
            dq(p + 1);
    }
}

int main()
{
    freopen("Money.INP", "r", stdin);
    freopen("Money.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    dq(1);
    cout << da << endl;
    while (!tam.empty())
    {
        cout << tam.front() << endl;
        tam.pop();
    }
}