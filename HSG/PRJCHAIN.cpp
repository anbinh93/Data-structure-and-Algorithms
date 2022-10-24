#include<bits/stdc++.h>
using namespace std;

struct prj{
    long chi, von, so;
    float t;
};

bool ss(prj p1, prj p2)
{
    return p1.t > p2.t;
}

long n, t1, t2, tong = 0;
prj a[100000];

int main ()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i].chi; 
    }
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i].von; 
        a[i].so = i;
        a[i].t = (float)a[i].von / (float)a[i].chi;
    }
    sort(a + 1, a + n + 1, ss);
    for(int i = 1; i <= n; i++)
    {
        tong += a[i].von;
        tong -= a[i].chi;
        //cout << a[i].chi << " " << a[i].von << " " << a[i].so << endl;
    }
    //return 0;
    cout << tong - a[n-1].von << "\n";
    for(int i = 1; i <= n; i++)
    {
        cout << a[i].so << " ";
    }
}