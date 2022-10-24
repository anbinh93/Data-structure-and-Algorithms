#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

string s;
long da = 0;

long _stoi(string tam)
{
    long _tam = 0;
    for (int i = 0; i < tam.length(); i++)
    {
        _tam = (_tam * 10) + (tam[i] - '0');
    }
    return _tam;
}

int main()
{
    //freopen("Boi4.INP", "r", stdin);
    //freopen("Boi4.OUT", "w", stdout);
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        if (_stoi(s.substr(i, 2)) % 4 == 0)
            da++;
    cout << da;
}