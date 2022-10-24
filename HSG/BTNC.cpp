#include<iostream>
using namespace std;

long n, k, dem = 0;
static long a[1000000];
static bool b[1000000];

void tinh(int p)
{
    for(int i = 1; i <= n; i++)
    { 
        //cout << i << " " << p << endl;
        if(b[i] == true)
            continue;
        a[p] = i;
        b[i] = true;
        if(p == k)
        {
            for(int j = 1; j <= k; j++)
                cout << a[j] << " ";
            cout << endl;
        }
        else tinh(p + 1);
        b[i] = false;
    }
}

int main()
{
    cin >> n >> k;
    //cout << !n / !(n - k);
    tinh(1);
}