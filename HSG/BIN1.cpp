#include <iostream>
#include <math.h>
#include <cstring>
#define ull unsigned long long
using namespace std;

long n, _dem = 0, cn = -10e8;
string dem;
static string f[100][100];
static char a[1000000];

string bigsum(string x, string y)
{
   long long i, k, carry;
   string sum;

   while (x.length() < y.length())
       x = "0" + x;
   while (x.length() > y.length())
       y = "0" + y;
   carry = 0;
   sum = "";
   for (i = x.length() - 1; i >= 0; i--)
   {
       k = int(x[i]) + int(y[i]) - 2 * 48 + carry;
       carry = k / 10;
       k = k % 10;
       sum = char(k + 48) + sum;
   }
   if (carry > 0)
       sum = "1" + sum;
   return sum;
}

string tinh(long i, long c)
{
   if (i > n)
   {
       if (c == 0)
           return "1";
       return "0";
   }

   if (f[i][c] - 48 != -1)
       return f[i][c];

   if (c < _dem)
   {
       c = _dem;
   }

   f[i][c] = "0";

   if (a[i] != '?')
   {
       f[i][c] += bigsum(tinh(i + 1, c), f[i][c]);
   }

   f[i][c] += bigsum(tinh(i + 1, c + 1), f[i][c]);

   if (c >= 1)
       f[i][c] += bigsum(tinh(i + 1, c - 1), f[i][c]);
}

int main()
{
   //freopen("BT1.INP", "r", stdin);
   //freopen("BT1.OUT", "w", stdout);
   cin >> n;
   for (int i = 1; i <= n; i++)
   {
       cin >> a[i];
       if (a[i] == '(')
           _dem++;
       if (a[i] == ')')
           _dem--;
   }
   memset(f, -1, sizeof(f));
   dem = tinh(1, _dem);
   cout << _dem << endl;
}