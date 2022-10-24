#include <iostream>
#include <stdio.h>
#include <stack>
#include <cstring>
#include <string>
using namespace std;

bool kt(string tam)
{
    stack<char> s;
    char x;

    for (int i = 0; i < tam.length(); i++)
    {
        if (tam[i] == '(' || tam[i] == '[' || tam[i] == '{')
        {
            s.push(tam[i]);
            continue;
        }

        if (s.empty())
            return false;

        switch (tam[i])
        {
        case ')':
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;

        case '}':
            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;

        case ']':
            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }

    return (s.empty());
}

int main()
{
    freopen("PARENTHESES.INP", "r", stdin);
    freopen("PARENTHESES.OUT", "w", stdout);
    string s;
    long n;
    cin >> n;
    for (int i = 1; i <= n + 1; i++)
    {
        getline(cin, s);
        //cout << s << endl;
        if (s.length() == 0)
        {
            continue;
        }
        cout << (kt(s) ? "YES" : "NO") << endl;
    }
}