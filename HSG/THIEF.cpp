#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main()
{
    long long n, m, k, l, tong = 0;
    cin >> n >> m;
    map<long long, long long, greater<int>> diem;
    for (int i = 1; i <= m; i++)
    {
        cin >> k >> l;
        diem[l] += k;
    }
    map<long long, long long>::iterator it = diem.begin();
    while (it != diem.end() && n != 0)
    {
        if (n - it->second >= 0)
        {
            tong += it->second * it->first;
            n -= it->second;
            cout << it->second << " " << it->first << '\n';
        }
        else
        {
            tong += n * it->first;
            cout << n << " " << it->first << '\n';
            n = 0;
        }
        it++;
    }
    cout << tong;
}