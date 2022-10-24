#include <iostream>
using namespace std;

static long long a[1000000];

struct ST
{
    long long trai[4000000], phai[4000000], la[4000000], kq[4000000];
    long long _trai, _phai;

    void Dung(long long x, long long _trai, long long _phai)
    {
        trai[x] = _trai;
        phai[x] = _phai;
        if (_trai == _phai)
        {
            kq[x] = a[_trai];
            la[_trai] = x;
        }
        else
        {
            long long tam = (_trai + _phai) / 2;
            Dung(x * 2, _trai, tam);
            Dung(x * 2 + 1, tam + 1, _phai);
            kq[x] = kq[x * 2] + kq[x * 2 + 1];
        }
    }

    void CapNhat(long long vt, long long gt)
    {
        long long tam = la[vt];
        kq[tam] = gt;
        for (tam /= 2; tam > 0; tam /= 2)
            kq[tam] = kq[tam * 2] + kq[tam * 2 + 1];
    }

    long long Goi(long long _trai, long long _phai)
    {
        this->_trai = _trai;
        this->_phai = _phai;
        return _Goi(1);
    }

    long long _Goi(long long diem)
    {
        if (_trai > phai[diem] || _phai < trai[diem])
            return 0;
        else if (_trai <= trai[diem] && _phai >= phai[diem])
            return kq[diem];
        return _Goi(diem * 2) + _Goi(diem * 2 + 1);
    }
};

char tam1;
long long tam2, tam3;
long long n, m;
ST st;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("QUERYSUM.INP", "r", stdin);
    freopen("QUERYSUM.OUT", "w", stdout);
    cin >> n >> m;
    st.Dung(1, 1, n);
    for (int i = 1; i <= m; i++)
    {
        cin >> tam1 >> tam2 >> tam3;
        if (tam1 == 'S')
        {
            st.CapNhat(tam2, tam3);
        }
        else
        {
            cout << st.Goi(tam2, tam3) << endl;
        }
    }
}