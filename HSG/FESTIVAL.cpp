#include<iostream>
#include<algorithm>
using namespace std;

struct hs{
    long diem, vt;
};

bool ss(hs h1, hs h2) {
    return h1.diem > h2.diem;
}

long x, y, z, n, a, b, c;
static hs d[1000000];

int main ()
{ 
    freopen("FESTIVAL.INP", "r", stdin);
	freopen("FESTIVAL.OUT", "w", stdout);
    cin >> x >> y >> z;
    cin >> n;
    for(int i = 1; i <= n; i++)
    { 
        cin >> a >> b >> c;
        d[i].diem = a * x + b * y + c * z;
        d[i].vt = i;
    }
    sort(d + 1, d + n + 1, ss);
    cout << d[1].vt << " " << d[2].vt << " " << d[3].vt << endl;
}