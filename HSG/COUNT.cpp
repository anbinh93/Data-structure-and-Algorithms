#include <iostream>
#include <algorithm>
#include <map>
#include <stdio.h>

using namespace std;

long t, n, dem = 0, _dem = 0;
map<long, map<long, long>> f;

long tinh(long a, long b)
{
   if (f[a][b] != 0)
   {
       return f[a][b];
   }
   for (int i = n; i >= 1; i--)
   {
       _dem++;
       if (__gcd(a, b) == b)
           f[a][b]++;
   }
   return f[a][b];
}

int main()
{
   cin >> t;
   for (int i = 1; i <= t; i++)
   {
       cin >> n;
       for (int i = n; i >= 1; i--)
       {
           dem += tinh(i, n);
       }
       cout << dem << '/' << _dem << endl;
       dem = 0;
       _dem = 0;
   }
}