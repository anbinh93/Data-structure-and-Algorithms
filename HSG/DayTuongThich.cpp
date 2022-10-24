#include <iostream>
using namespace std;
int main()
{
    long n;
    static long a[1000000], b[1000000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] == a[j] && b[i] != b[j] || a[i] != a[j] && b[i] == b[j])
            {
                cout << 0;
                return 0;
            }
        }
    }
    cout << 1;
}