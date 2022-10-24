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

int main()
{

}