#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
long long snt[5000008];
void sang(long long n)
{
   for (int i = 1; i <= n; i++)
   {
       snt[i] = true;

   }
   snt[1] = false;
   for (int i = 2; i <= sqrt(n); i++)
   {
       if (snt[i])
       {
           for (int j = i * i; j <= n; j += i)
           {
               snt[j] = false;
           }
       }
   }
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);
   long long n, a, b, dem, dem2 = 0;
   sang(5000008);
   cin >> n;
   for (int i = 1; i <= n; i++)
   {
       cin >> a >> b;
       dem = count(snt + a, snt + b + 1, true);
       cout << dem << "\n";
   }
}



