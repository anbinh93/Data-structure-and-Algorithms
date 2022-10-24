#include <bits/stdc++.h>
using namespace std;

long n, k, tam1, tam2, tam3, tam4;
static long a[1000000];

struct ST
{
    long _trai, _phai;
    long trai[4000000], phai[4000000], la[4000000], kq[4000000];

    void CapNhat(long long trai, long long phai, long long gt)
    {
        for (int i = trai; i <= phai; i++)
        {
            kq[i] += gt;
        }
    }

    long Goi(long x)
    {
        return kq[x];
    }
};

ST st;

int main()
{
    freopen("GT1.INP", "r", stdin);
    freopen("GT1.OUT", "w", stdout);
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        cin >> tam1;
        if (tam1 == 1)
        {
            cin >> tam2 >> tam3 >> tam4;
            st.CapNhat(tam2, tam3, tam4);
        }
        else if (tam1 == 2)
        {
            cin >> tam2;
            cout << st.Goi(tam2) << endl;
        }
    }
}
