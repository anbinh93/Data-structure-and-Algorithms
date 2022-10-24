#include<iostream>
using namespace std;

string s;
bool dau = true;

int main()
{
    while(cin >> s)
    {
        for(char c : s)
        {
            if(dau)
            {
                cout << (char)toupper(c);
                dau = false;
            }
            else
            {
                cout << (char)tolower(c);
            }
        }
        cout << ' ';
    }
}
