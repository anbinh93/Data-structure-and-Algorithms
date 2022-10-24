#include<iostream>
#include<cstring>
#include<ctype.h>
using namespace std;

string s;
int dem = 0;
char tam;

int main()
{
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        dem++;
        if(s[i] != s[i + 1])
        {
            if(dem == 1)
            {
                cout << s[i];
            }
            else
            {
                cout << dem << s[i];
            }
            dem = 0;
        }
    }
    cout << endl;
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        if(isdigit(s[i]))
        {
            for(int j = 1; j <= s[i] - 48; j++)
            {
                cout << s[i + 1];
            }
        }
    }
}