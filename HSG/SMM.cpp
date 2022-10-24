#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct so
{
    long dem, so;
};

bool ss(so s1, so s2)
{
    return (s1.dem > s2.dem);
}

long n, tam, ln = -1;
static so v[1000000];
vector<long> smm;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> tam;
        v[tam].so = tam;
        v[tam].dem += 1;
    }
    sort(v + 1, v + n + 1, ss);
    // for(int i = 1; i <= n; i++)
    // {
    //     cout << v[i].so << " " << v[i].dem << endl;
    // }
    // return 0;
    ln = v[1].dem;
    for(int i = 1; i <= n; i++)
    {
        if(ln == v[i].dem)
        {
            smm.push_back(v[i].so);
        }
    }
    cout << smm.size() << '\n';
    sort(smm.begin(), smm.end());
    for(auto i : smm)
        cout << i << '\n';
    cout << ln;
}