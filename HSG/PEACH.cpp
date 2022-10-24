#include <iostream>
#include <queue>
#include <map>
using namespace std;

long n, a, b;

struct diem
{
    long tg, gt;
};

struct ss
{
    bool operator()(diem s1, diem s2)
    {
        if (s1.gt < s2.gt)
            return true;
        return false;
    }
};

priority_queue<long, vector<diem>, ss> q;
diem d_tam;
map<long, long> dd;
long da = 0, dem = 0;

int main()
{
    //freopen("PEACH.INP", "r", stdin);
    //freopen("PEACH.OUT", "w", stdout);
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++)
    {
        cin >> d_tam.tg >> d_tam.gt;
        if (d_tam.tg >= b || d_tam.tg < a)
            continue;
        q.push(d_tam);
    }
    while (!q.empty() && dem < b - a)
    {
        if (dd[q.top().tg] < b - q.top().tg)
        {
            dd[q.top().tg] += 1;
            da += q.top().gt;
            dem++;
            cout << q.top().tg << " " << q.top().gt << endl;
        }
        if (!q.empty())
            q.pop();
        else
            break;
    }
    cout << da;
}