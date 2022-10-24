#include <iostream>
#include <algorithm>
using namespace std;

long n, m;
static long a[1000000];
long tam1, tam2, tam3, tam4;

long long _max(long long a, long long b, long long c)
{
    return max(a,max(b,c));
}

struct nut
{
    long trai = -10e16, phai = -10e16, lon_nhat = -10e16, tong = -10e16;
};

struct ST
{
    nut kq[10000000];

    nut nhap(nut trai, nut phai)
    {
        nut _nut;
        _nut.tong = trai.tong + phai.tong;
        _nut.trai = max(trai.lon_nhat, trai.tong + phai.trai);
        _nut.phai = max(phai.phai, phai.tong + trai.phai);
        _nut.lon_nhat = _max(trai.lon_nhat, phai.lon_nhat, trai.phai + phai.trai);
        return _nut;
    }

    void Dung(long long x, long long _trai, long long _phai)
    {
        if (_trai == _phai)
        {
            kq[x].trai = kq[x].phai = kq[x].tong = kq[x].lon_nhat = a[_trai];
        }
        else
        {
            long long tam = (_trai + _phai) / 2;
            Dung(x * 2, _trai, tam);
            Dung(x * 2 + 1, tam + 1, _phai);
            kq[x] = nhap(kq[x * 2], kq[x * 2 + 1]);
        }
    }

    long long Goi(long x, long long trai, long long phai, long long _trai, long long _phai)
    {
        if (phai < _trai || trai > _phai || trai > phai)
            return -10e16;
        if (_trai <= trai && _phai >= phai)
        {
            cout << kq[x].tong << " " << kq[x].phai << " " << kq[x].trai << " " << kq[x].lon_nhat << endl;
            return kq[x].lon_nhat;
        }
        long tam = (trai + phai) / 2;
        Goi(x * 2, trai, tam, _trai, _phai);
        Goi(x * 2 + 1, tam + 1, phai, _trai, _phai);
        return nhap(kq[x * 2], kq[x * 2 + 1]).lon_nhat;
    }
};

ST st;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("GSS.INP", "r", stdin);
    //freopen("GSS.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    st.Dung(1, 1, n);
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> tam1 >> tam2;
        cout << st.Goi(1, 1, n, tam1, tam2) << '\n';
    }
}