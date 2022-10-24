#include<iostream>
using namespace std;

long n, m, k;

int main()
{ 
    freopen("BUY.INP", "r", stdin);
	freopen("BUY.OUT", "w", stdout);
    cin >> n >> k >> m;
    cout << (n * m) - (n / k * m) + n % k * m;
}