#include <iostream>
using namespace std;

long n, m, k;
static long a[1000000];
long tam1, tam2, tam3;

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
            kq[x] = max(kq[x * 2], kq[x * 2 + 1]);
        }
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
            return -10e15;
        else if (_trai <= trai[diem] && _phai >= phai[diem])
            return kq[diem];
        return max(_Goi(diem * 2), _Goi(diem * 2 + 1));
    }
};

ST st;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("QMAX.INP", "r", stdin);
    freopen("QMAX.OUT", "w", stdout);
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> tam1 >> tam2 >> tam3;
        for (int j = tam1; j <= tam2; j++)
        {
            a[j] += tam3;
        }
    }
    st.Dung(1, 1, n);
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        cin >> tam1 >> tam2;
        cout << st.Goi(tam1, tam2) << "\n";
    }
}