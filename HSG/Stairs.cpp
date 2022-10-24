#include<iostream>
#include<stdio.h>
using namespace std;

static unsigned long long f[1000000];
string s;

int main()
{
    freopen("Stairs.INP", "r", stdin);
    freopen("Stairs.OUT", "w", stdout);
    cin >> s;
    if(s.length() == 3)
        {cout << "YES" << endl << 2; return 0;}
    f[1] = 1;
    f[2] = 2;
    f[3] = 2;
    if(s[1] - 48 == 0)
        f[2] = 0;
    if(s[2] - 48 == 0)
        f[3] = 0;
    f[s.length()] = 0;
    for(int i = 4; i <= s.length(); i++)
    {
        if(s[i - 1] - 48 == 0)
            continue;
        f[i] = f[i - 1] + f[i - 2] + f[i - 3];
    }
    
    if(f[s.length()] == 0)
    {
        cout << "NO";
        return 0;
    }
    else
    {
        cout << "YES" << endl;
        cout << f[s.length()];
    }
}