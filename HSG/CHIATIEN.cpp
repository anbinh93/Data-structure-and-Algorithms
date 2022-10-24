#include <iostream>
#include <string>
#include <stack>
#include <stdio.h>
using namespace std;

long n, A = 0, B = 0, dem = 0;
bool dc = false;
static long a[10000];
static bool b[10000];
string s;
stack<string> q;

void dq(long p)
{
    for (int i = 0; i <= 1; i++)
    {
        b[p] = i;

        //cout << A[p - 1] << " " << B[p - 1] << " " << p << endl;

        if (p == n)
        {
            for (int j = 1; j <= n; j++)
            {
                if (b[j] == 0)
                    B += a[j];
                else
                    A += a[j];
            }
            if (A == B)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (b[j] == 0)
                        s += "B";
                    else
                        s += "A";
                }
                q.push(s);
                s = "";
                dc = true;
                dem += 1;
            }
            A = 0;
            B = 0;
        }
        else
            dq(p + 1);
    }
}

int main()
{
    freopen("CHIATIEN.INP", "r", stdin);
    freopen("CHIATIEN.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    dq(1);
    if (!dc)
    {
        cout << "NO";
        return 0;
    }
    else
    {
        cout << dem << endl;
        while (!q.empty())
        {
            cout << q.top() << endl;
            q.pop();
        }
    }
}