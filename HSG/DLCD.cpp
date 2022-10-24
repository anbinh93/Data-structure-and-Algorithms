#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

long n, _n1 = 0, _n2 = 0, _n3 = 1, dem = 0;
vector<int> n1;
vector<int> n2;

long tinh(long n)
{
    while(n != 0)
    {
        n1.push_back(n % 10);
        n2.push_back(n % 10);
        n /= 10;
    }
    sort(n1.begin(), n1.end());
    sort(n2.begin(), n2.end(), greater<int>());
    for(int i = 1; i <= 4; i++)
    {
        _n1 = _n1 * 10 + n1.back();
        _n2 = _n2 * 10 + n2.back();
        n1.pop_back();
        n2.pop_back();
    }
    return _n1 - _n2;
}

int main()
{
    while(cin >> n)
    {
        while(_n3 != 0)
        {
            _n3 = tinh(n);
            dem++;
        }
        cout << dem;
        _n1 = 0; _n2 = 0; _n3 = 1; dem = 0;
        n1.clear();
        n2.clear();
    }
}