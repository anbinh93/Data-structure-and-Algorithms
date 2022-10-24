#include <iostream>
#include <vector>
using namespace std;

vector<long> q;
long n, tam, dem = 0, _dem;

int main()
{
    //freopen("DELNUM.INP", "r", stdin);
    //freopen("DELNUM.OUT", "w", stdout);
    cin >> n;
    q.push_back(0);
    for (int i = 1; i <= n; i++)
    {
        cin >> tam;
        q.push_back(tam);
    }
    while (true)
    {
        _dem = dem;
        for (int i = 2; i <= n; i++)
        {
            if (q[i] < q[i - 1] && q[i] < q[i + 1])
            {
                q.erase(q.begin() + i);
                i--;
                dem++;
            }
        }
        cout << dem << " ";
        if (_dem == dem)
            break;
    }
    cout << n - dem;
}