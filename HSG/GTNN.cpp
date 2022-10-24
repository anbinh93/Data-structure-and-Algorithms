#include <bits/stdc++.h>
using namespace std;

long n, k, tam1, tam2;
static long a[1000000];

struct ST
{
    long _trai, _phai;
    long trai[4000000], phai[4000000], la[4000000], kq[4000000];

    void Dung(long x, long trai, long phai)
    {
        this->trai[x] = trai;
        this->phai[x] = phai;
        if (trai == phai)
        {
            kq[x] = a[trai];
            return;
        }
        else
        {
            long tam = (trai + phai) / 2;
            Dung(x * 2, trai, tam);
            Dung(x * 2 + 1, tam + 1, phai);
            kq[x] = min(kq[x * 2], kq[x * 2 + 1]);
        }
    }

    long _Goi(long diem)
    {
        if (_trai > phai[diem] || _phai < trai[diem])
            return 10e7;
        else if (_trai <= trai[diem] && _phai >= phai[diem])
            return kq[diem];

        return min(_Goi(diem * 2), _Goi(diem * 2 + 1));
    }

    long Goi(long trai, long phai)
    {
        this->_trai = trai;
        this->_phai = phai;
        return _Goi(1);
    }
};

ST st;

int main()
{
    freopen("GTNN.INP", "r", stdin);
    freopen("GTNN.OUT", "w", stdout);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    st.Dung(1, 1, n);

    for (int i = 1; i <= k; i++)
    {
        cin >> tam1 >> tam2;
        cout << st.Goi(tam1, tam2) << endl;
    }
}
