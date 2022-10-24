#include <iostream>
#include <queue>
using namespace std;

priority_queue<long, vector<long>, less<long>> q;
static long a[1000000];
long _tam, dem = 0;
char tam;

int main()
{
    freopen("PQ.INP", "r", stdin);
    freopen("PQ.OUT", "w", stdout);
    while (cin >> tam)
    {
        if (tam == '+')
        {
            cin >> _tam;
            q.push(_tam);
        }
        else
        {
            if (q.size() == 0)
                continue;
            _tam = q.top();
            while (q.top() == _tam && q.size() > 0)
                q.pop();
        }
    }
    while (q.size() > 0)
    {
        _tam = q.top();
        a[++dem] = _tam;
        while (_tam == q.top() && q.size() > 0)
            q.pop();
    }
    cout << dem << endl;
    for (int i = 1; i <= dem; i++)
    {
        cout << a[i] << " ";
    }
}