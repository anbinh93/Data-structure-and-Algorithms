#include <iostream>
using namespace std;
bool dx(long n)
{
    long t = n, m = 0;
    while (t != 0)
    {
        m = m * 10 + t % 10;
        t /= 10;
    }
    return (m == n);
}
int main()
{
    long a, b, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        cout << dx(a + b) << '\n';
    }
}