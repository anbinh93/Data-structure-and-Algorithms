#include <iostream>
#include <vector>
#include <stack>
#include <map>
using namespace std;

long n, m, tam1, tam2;
static vector<long> a[1000000];
static bool dd[1000000];
static char mau[1000000];
static long tv[1000000];
stack<long> s;
map<long, map<long, long>> cung;

void kq(long i)
{
    tam1 = tv[i];
    tam2 = i;
    while (tam1 != tam2)
    {
        s.push(tam1);
        tam1 = tv[tam1];
    }
    s.push(i);
    while (!s.empty())
    {
        tam1 = s.top();
        s.pop();
        //cout << tam1 << " " << s.top() << endl;
        if (!s.empty())
            cout << cung[tam1][s.top()] << " ";
        else
            cout << cung[tam1][i] << endl;
    }
    exit(0);
}

void DFS(long dinh)
{
    mau[dinh] = 'X';
    dd[dinh] = true;
    for (long i : a[dinh])
    {
        if (dd[i] == false)
        {
            tv[i] = dinh;
            dd[i] = true;
            DFS(i);
        }
        else if (mau[i] == 'X')
        {
            tv[i] = dinh;
            cout << "YES" << endl;
            kq(i);
        }
    }
    mau[dinh] = 'D';
}

int main()
{
    freopen("CIRCUIT.INP", "r", stdin);
    freopen("CIRCUIT.OUT", "w", stdout);
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> tam1 >> tam2;
        a[tam1].push_back(tam2);
        cung[tam1][tam2] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        if (dd[i] == false)
        {
            DFS(i);
        }
    }
    cout << "NO";
}