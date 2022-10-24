#include<iostream>
using namespace std;

string bigsum(string x, string y)
{
   long long i, k, carry;
   string sum;

   while (x.length() < y.length()) x = "0" + x;
   while (x.length() > y.length()) y = "0" + y;
   carry = 0;
   sum = "";
   for (i = x.length() - 1; i >= 0; i--)
   {
       k = int(x[i]) + int(y[i]) - 2 * 48 + carry;
       carry = k / 10;
       k = k % 10;
       sum = char(k + 48) + sum;
   }
   if (carry > 0) sum = "1" + sum;
   return sum;
}

static string f[100][100][2];
long n, k;
string dem;

string tinh(long i, long c, bool ok)
{
   if (i > n)
   {
       if (c == 0 && ok)
           return "1";
       return"0";
   }

   if (f[i][c][ok] != "")
       return f[i][c][ok];

   f[i][c][ok] = "0";

   if (c < k)
       f[i][c][ok] = bigsum(tinh(i + 1, c + 1, ok || c == k), f[i][c][ok]);
   if (c > 0)
       f[i][c][ok] = bigsum(tinh(i + 1, c - 1, ok), f[i][c][ok]);
}

int main()
{
   //freopen("BT2.INP", "r", stdin);
   //freopen("BT2.OUT", "w", stdout);
   while (cin >> n >> k)
   {
       //dem = tinh(1, 0, false);
       if (dem.length() > 10)
       {
           cout << dem.substr(0, 5) << "..." << dem.substr(dem.length() - 6, 5) << endl;
       }
        cout << dem << endl;
   }
   
}