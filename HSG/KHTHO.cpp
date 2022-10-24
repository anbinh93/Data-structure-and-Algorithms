#include<bits/stdc++.h>
using namespace std;

long n;
string s;
char c;

int main()
{
    cin >> n;
    while(cin >> c)
    {
        s += c;
    }
    long dem = s.length();
    for(int i = 0; i < n; i++)
    {
        if(s[i] != s[dem])
        {
            cout << 0;
            return 0;
        }
        dem--;
    }
    cout << 1;
}