#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int r1, r2, c1, c2, d1, d2;
int a[6];
int ln;

bool kt()
{
    return (a[1] + a[2] == r1 && a[3] + a[4] == r2 && a[1] + a[3] == c1 && a[2] + a[4] == c2 && a[1] + a[4] == d1 && a[2] + a[3] == d2);
}

void tim(int p)
{
    for (int i = 1; i <= 20; i++)
    {
        a[p] = i;
        if (p == 4)
        {
            if (kt())
            {
                for (int j = 1; j <= 4; j++)
                {
                    cout << a[j] << " ";
                    if (j == 2)
                        cout << endl;
                }
                exit(0);
            }
        }
        else
            tim(p + 1);
    }
}

int main()
{
    freopen("GAMEFUN.INP", "r", stdin);
    freopen("GAMEFUN.OUT", "w", stdout);
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    tim(1);
}