#include <iostream>
#include <stack>
using namespace std;

long hang, cot, tam = 10e7, _tam = 0, da = -1;
char c_tam;
static long a[10000][10000];
static long trai[10000000];
static long phai[10000000];
stack<long> s;

int main()
{
    //freopen("MAXRECT.INP", "r", stdin);
    //freopen("MAXRECT.OUT", "w", stdout);
    cin >> hang >> cot;
    for (int i = 1; i <= hang; i++)
    {
        for (int j = 1; j <= cot; j++)
        {
            cin >> c_tam;
            if (c_tam == 'B')
                a[i][j] = 0;
            else
                a[i][j] = 1;
        }
    }
    for (int i = 1; i <= hang; i++)
    {
        for (int j = 1; j <= cot; j++)
        {
            if (a[i][j] != 0)
            {
                _tam++;
                a[i][j] += a[i - 1][j];
            }
        }

        for (int j = 1; j <= cot; j++)
        {
            while (!s.empty() && a[i][s.top()] >= a[i][j])
                s.pop();
            if (s.empty())
                trai[j] = 0;
            else
                trai[j] = s.top();
            s.push(j);
        }

        while (!s.empty())
            s.pop();

        for (int j = cot; j >= 1; j--)
        {
            while (!s.empty() && a[i][s.top()] >= a[i][j])
                s.pop();
            if (s.empty())
                phai[j] = cot + 1;
            else
                phai[j] = s.top();
            s.push(j);
        }
        for (int j = 1; j <= cot; j++)
        {
            if (da < (phai[j] - trai[i]) * a[i][j])
                da = (phai[i] - trai[i] - 1) * a[i][j];
        }
    }
    cout << da;
}

// long da = -1, hang, cot;
// stack<long> s;
// static long trai[10000000];
// static long phai[10000000];
// static long a[10000000];
// static char _a[10000][10000];
// int main()
// {
//     //freopen("MAXRECT.INP", "r", stdin);
//     //freopen("MAXRECT.OUT", "w", stdout);
//     // 0 2 6 4 1 2 2
//     cin >> hang >> cot;
//     for (int i = 1; i <= hang; i++)
//     {
//         for (int j = 1; j <= cot; j++)
//         {
//             cin >> _a[i][j];
//         }
//     }
//     for (int i = 1; i <= cot; i++)
//     {
//         for (int j = 1; j <= hang; j++)
//         {
//             if (_a[j][i] == 'W')
//                 a[i]++;
//         }
//     }
//     for (int i = 1; i <= cot; i++)
//     {
//         while (!s.empty() && a[s.top()] >= a[i])
//             s.pop();
//         if (s.empty())
//             trai[i] = 0;
//         else
//             trai[i] = s.top();
//         s.push(i);
//     }
//     for (int i = cot; i >= 1; i--)
//     {
//         while (!s.empty() && a[s.top()] >= a[i])
//             s.pop();
//         if (s.empty())
//             phai[i] = cot + 1;
//         else
//             phai[i] = s.top();
//         s.push(i);
//     }
//     for (int i = 1; i <= cot; i++)
//     {
//         if (da < (phai[i] - trai[i] - 1) * a[i])
//         {
//             da = (phai[i] - trai[i] - 1) * a[i];
//         }
//     }
//     cout << da << endl;
// }
