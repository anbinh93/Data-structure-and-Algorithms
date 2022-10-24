#include <iostream>
#include <stdio.h>
using namespace std;

long k, kq = 0, dem = 0;
string s;

int main()
{
    freopen("SUBSTR.INP", "r", stdin);
    freopen("SUBSTR.OUT", "w", stdout);
    cin >> k >> s;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i; j < s.length(); j++)
        {
            dem += s[i] - 48;
            if (dem == k)
            {
                kq++;
            }
            if (dem > k)
                break;
        }
        for (int j = i; j >= 0; j--)
        {
            dem += s[i] - 48;
            if (dem == k)
            {
                kq++;
            }
            if (dem > k)
                break;
        }
        dem = 0;
    }
    cout << kq;
}