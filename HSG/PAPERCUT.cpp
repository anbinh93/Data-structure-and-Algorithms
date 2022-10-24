#include<bits/stdc++.h>
using namespace std;

unsigned long long a, b, tam, tong = 0;

int main()
{
    cin >> a >> b;
    unsigned long long t = a * b;
    for(long long i = 1; i <= sqrt(t); i++)
    {
        tam = t / i;
        if(t % i == 0 && tam != i)
        {
            tong += 2;
        }
        else if (t % i == 0 && tam == i) tong++;
    }
    cout << tong;
}
