#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

struct diem
{
    long x, y;
};

long dai, rong, da = -1;
diem tren_trai, duoi_phai;

stack<long> s;
static long trai[10000000];
static long phai[10000000];
static long a[10000000];

stack<long> _s;
static long _trai[10000000];
static long _phai[10000000];
static long _a[10000000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    freopen("RECT.INP", "r", stdin);
    freopen("RECT.OUT", "w", stdout);

    cin >> rong >> dai;
    for (int i = 1; i <= dai; i++)
    {
        cin >> a[i];
        _a[i] = rong - a[i];
        while (!s.empty() && a[s.top()] >= a[i])
            s.pop();
        if (s.empty())
            trai[i] = 0;
        else
            trai[i] = s.top();
        s.push(i);

        while (!_s.empty() && _a[_s.top()] >= _a[i])
            _s.pop();
        if (_s.empty())
            _trai[i] = 0;
        else
            _trai[i] = _s.top();
        _s.push(i);
    }

    for (int i = dai; i >= 1; i--)
    {
        while (!s.empty() && a[s.top()] >= a[i])
            s.pop();
        if (s.empty())
            phai[i] = 0;
        else
            phai[i] = s.top();
        s.push(i);

        while (!_s.empty() && _a[_s.top()] >= _a[i])
            _s.pop();
        if (_s.empty())
            _phai[i] = dai + 1;
        else
            _phai[i] = _s.top();
        _s.push(i);
    }

    for (int i = 1; i <= dai; i++)
    {
        if (da < (phai[i] - trai[i] - 1) * a[i])
        {
            da = (phai[i] - trai[i] - 1) * a[i];
            tren_trai.x = 1;
            tren_trai.y = trai[i] + 1;
            duoi_phai.x = a[i];
            duoi_phai.y = phai[i] - 1;
        }

        if (da < (_phai[i] - _trai[i] - 1) * _a[i])
        {
            da = (_phai[i] - _trai[i] - 1) * _a[i];
            tren_trai.x = rong - _a[i] + 1;
            tren_trai.y = _trai[i] + 1;
            duoi_phai.x = rong;
            duoi_phai.y = _phai[i] - 1;
        }
    }

    cout << da << endl;
    cout << tren_trai.x << " " << tren_trai.y << endl;
    cout << duoi_phai.x << " " << duoi_phai.y << endl;
}