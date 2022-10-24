#include<bits/stdc++.h>
using namespace std;

struct so
{
    long num, vt;
    so(long num, long vt) : num(num), vt(vt){}
};

long long tam1, tam2;
string s;
vector<so> v;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //freopen("DELDEC.INP", "r", stdin);
    //freopen("DELDEC.OUT", "w", stdout);

    cin >> s;
    tam1 = 999999;
    for(int i = 0; i < s.length(); i++)
    {
        if((int)s[i] < tam1)
        {
            tam1 = int(s[i]);
            tam2 = i;
        }
    }
    for(int i = 0; i < s.length(); i++)
    {
        if(i == tam2)
            continue;
        cout << s[i];
    }
}