#include <iostream>
#include <queue>
#include <vector>
using namespace std;

long long n, l, tam1, tam2;
long long kq = 0, tong = 0;
long long a[1000000];
priority_queue<long long, vector<long long>, greater<int>> q;

int main()
{
    freopen("PARTITION.INP", "r", stdin);
    freopen("PARTITION.OUT", "w", stdout);

    cin >> l >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        q.push(a[i]);
        tong += a[i];
    }

    //q.push(l - tong);

    while (q.size() > 1)
    {
        tam1 = q.top();
        q.pop();
        tam2 = q.top();
        q.pop();
        //cout << tam1 << " " << tam2 << endl;
        kq += tam1 + tam2;
        q.push(tam1 + tam2);
    }

    cout << kq + (l - tong);
}