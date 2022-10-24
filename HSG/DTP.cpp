#include<iostream>
using namespace std;

long n, dem = 0;
long u, i, o, p;
static bool a[1000][1000];

int main()
{
    cin >> n;
    for(int t = 0; t < n; t++)
    {
        cin >> u >> i >> o >> p;
        for(int x = u; x <= o; x++)
        {
            for(int y = i; y <= p; y++)
            {
                if(a[x][y] == 0)
                {
                    a[x][y] = 1;
                    dem++;
                }
            }
        }
    }
    for(int x = 0; x < 10; x++)
    {
        for(int y = 0; y < 10; y++)
        {
            cout << a[x][y] << " ";
        }
        cout << endl;
    }
    cout << dem;
}