#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>
using namespace std;

long cot, hang;
long tplt, da = 1;
long cha[1000000];
map<long, map<long, long>> a;
vector<pair<long, long>> dinh[1000000];
static bool dd[1000000];
vector<long> v;

void tao(vector<pair<long, long>> &v)
{
    for (pair<long, long> p : v)
    {
        cha[p.first * cot + p.second] = -1;
        tplt++;
    }
}

long tim(long u)
{
    return cha[u] < 0 ? u : cha[u] = tim(cha[u]);
}

void _nhap(long s, long r)
{
    if (cha[s] < cha[r])
        swap(s, r);
    cha[r] += cha[s];
    cha[s] = r;
}

void nhap(long s, long v)
{
    long t1 = tim(s);
    long t2 = tim(v);
    if (t1 != t2)
    {
        tplt--;
        _nhap(t1, t2);
        return;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("ISLANDS.INP", "r", stdin);
    freopen("ISLANDS.OUT", "w", stdout);
    cin >> hang >> cot;
    for (int i = 0; i < hang; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            cin >> a[i][j];
            dinh[a[i][j]].push_back(make_pair(i, j));
            if (dd[a[i][j]] == false)
            {
                v.push_back(a[i][j]);
                dd[a[i][j]] = true;
            }
        }
    }
    sort(v.begin(), v.end(), greater<long>());
    for (long i : v)
    {
        tao(dinh[i]);
        for (pair<long, long> p : dinh[i])
        {
            for (int t1 = -1; t1 <= 1; t1++)
            {
                for (int t2 = -1; t2 <= 1; t2++)
                {
                    if (t1 + t2 != 2 && t1 + t2 != -2 && t2 + t1 != 0 && a[p.first + t1][p.second + t2] >= i)
                        nhap(p.first * cot + p.second, (p.first + t1) * cot + (p.second + t2));
                }
            }
        }
        da = max(tplt, da);
    }
    cout << da;
}