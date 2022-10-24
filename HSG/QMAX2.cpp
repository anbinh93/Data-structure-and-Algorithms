#include <iostream>
#include <algorithm>
using namespace std;

long n, m;
long tam1, tam2, tam3, tam4;

struct ST
{

    long long trai[4000000], phai[4000000], la[4000000], kq[4000000], luoi[1000000];

    void Dung(long long x, long long _trai, long long _phai)
    {
        trai[x] = _trai;
        phai[x] = _phai;
        if (_trai == _phai)
        {
            kq[x] = 0;
            la[_trai] = x;
        }
        else
        {
            long long tam = (_trai + _phai) / 2;
            Dung(x * 2, _trai, tam);
            Dung(x * 2 + 1, tam + 1, _phai);
            kq[x] = max(kq[x * 2], kq[x * 2 + 1]);
        }
    }

    void CapNhat(long x, long long trai, long long phai, long long _trai, long long _phai, long gt)
    {
        if (luoi[x] != 0)
        {
            kq[x] += luoi[x];
            if (trai != phai)
            {
                luoi[x * 2] += luoi[x];
                luoi[x * 2 + 1] += luoi[x];
            }
            luoi[x] = 0;
        }

        if (phai < _trai || trai > _phai || trai > phai)
            return;
        if (_trai <= trai && _phai >= phai)
        {
            kq[x] += gt;
            if (trai != phai)
            {
                luoi[x * 2] += gt;
                luoi[x * 2 + 1] += gt;
            }
            return;
        }
        long tam = (trai + phai) / 2;
        CapNhat(x * 2, trai, tam, _trai, _phai, gt);
        CapNhat(x * 2 + 1, tam + 1, phai, _trai, _phai, gt);
        kq[x] = max(kq[x * 2], kq[x * 2 + 1]);
    }

    long long Goi(long x, long long trai, long long phai, long long _trai, long long _phai)
    {
        if (phai < _trai || trai > _phai || trai > phai)
            return -10e16;
        if (luoi[x] != 0)
        {
            kq[x] += luoi[x];
            if (trai != phai)
            {
                luoi[x * 2] += luoi[x];
                luoi[x * 2 + 1] += luoi[x];
            }
            luoi[x] = 0;
        }
        if (_trai <= trai && _phai >= phai)
            return kq[x];
        long tam = (trai + phai) / 2;
        return max(Goi(x * 2, trai, tam, _trai, _phai), Goi(x * 2 + 1, tam + 1, phai, _trai, _phai));
    }
};

ST st;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("QMAX2.INP", "r", stdin);
    freopen("QMAX2.OUT", "w", stdout);
    cin >> n >> m;
    st.Dung(1, 1, n);
    for (int i = 1; i <= m; i++)
    {
        cin >> tam1;
        if (tam1 == 0)
        {
            cin >> tam2 >> tam3 >> tam4;
            st.CapNhat(1, 1, n, tam2, tam3, tam4);
        }
        else
        {
            cin >> tam2 >> tam3;
            cout << st.Goi(1, 1, n, tam2, tam3) << '\n';
        }
    }
}