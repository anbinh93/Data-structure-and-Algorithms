#include<bits/stdc++.h>
using namespace std;

long n, dem = 0;
char tam;
static bool a[1000][1000];

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> tam;
            if(tam == '0')
                a[i][j] = false;
            else a[i][j] = true;
        }
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(a[i][j] == 0)
            {
                for(int p = -1; p <= 1; p++)
                {
                    for(int l = -1; l <= 1; l++)
                    {
                        if(a[i + p][j + l])
                        {
                            dem++;
                        }
                    }
                }
                cout << i << " " << j << " " << dem << endl;
                dem = 0;
            }
        }
    }
}
