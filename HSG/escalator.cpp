#include <iostream>
using namespace std;

long n, m;
long tam, x, y;
static bool hong[1000000];

long xu_ly(long x, long y)
{
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> tam >> x;
        if (tam == 1)
        {
            hong[x] = true;
        }
        else
        {
            cout << xu_ly(x, y) << endl;
        }
    }
}