#include<bits/stdc++.h>
using namespace std;

string s;
int a[10000];

int main()
{
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        a[i] = s[i] - 48;
    }
    sort(a, a + s.length());
    if(a[0] < s[0] - 48 - 1)
    {
        for(int i = 0; i < s.length(); i++)
        {
            cout << s[0] - 48 - 1;
        }
        return 0;
    }
    for(int i = 0; i < s.length(); i++)
    {
        cout << a[0];
    }
}