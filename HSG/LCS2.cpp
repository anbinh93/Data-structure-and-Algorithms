#include <iostream>
#include <stack>
using namespace std;

string x, y;
static long L[10000][10000];
stack<char> s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("LCS2.INP", "r", stdin);
    freopen("LCS2.OUT", "w", stdout);

    cin >> x >> y;
    long m = x.length();
    long n = y.length();

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 1;
            else if (x[i - 1] == y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }

    while (m > 0 && n > 0)
    {
        if (x[m - 1] == y[n - 1])
        {
            s.push(x[m - 1]);
            m--;
            n--;
        }
        else if (L[m - 1][n] > L[m][n - 1])
            m--;
        else
            n--;
    }

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}