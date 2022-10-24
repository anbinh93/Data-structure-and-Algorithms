#include <iostream>
#include <stack>
#include <vector>
#include <map>
using namespace std;
enum dau
{
    mo, dong, hai
};
long n, tam1, tam2, phong;
stack<long> s;
static dau _dau[1000000];
map<long, map<long, long>> m;
map<long, vector<long>> p;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> tam1 >> tam2;
        m[tam1][i] = tam2;
        _dau[tam1] = mo;
        if (_dau[tam2] == mo)
            _dau[tam2] = hai;
        else _dau[tam2] = dong;
    }
    for (int i = n; i >= 1; i--)
    {
        s.push(i);
    }
    for (int i = 1; i <= n; i++)
    {
        phong = s.top(); s.pop();
        if (_dau[i] == mo)
        {
        }
    }
}