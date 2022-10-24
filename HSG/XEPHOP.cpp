#include<bits/stdc++.h>
using namespace std;

struct hop{
    long d, r, t, v;
};

bool ss(hop h1, hop h2)
{
    return h1.t < h2.t;
}

long n, t1, t2, dem = 1;
hop a[1000000];
hop tam;
vector<long> v;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> t1 >> t2;
        if(t1 > t2)
        {
            a[i].d = t1;
            a[i].r = t2;
        }
        else
        {
            a[i].d = t2;
            a[i].r = t1;
        }
        a[i].t = a[i].d * a[i].r;
        a[i].v = i;
    }
    sort (a + 1, a + n + 1, ss);
    tam = a[1]; 
    v.push_back(a[1].v);
    for(int i = 1; i <= n; i++)
    {
        //cout << a[i].d << " " << a[i].r << endl;
        if(a[i].d > tam.d && a[i].r > tam.r)
        {
            tam = a[i];
            dem++;
            v.push_back(a[i].v);
        }
    }
    cout << dem << endl;
    sort(v.begin(), v.end());
    for(auto i : v)
    {
        cout << i << " ";
    }
}