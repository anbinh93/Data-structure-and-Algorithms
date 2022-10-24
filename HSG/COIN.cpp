#include <iostream>
#include <stdio.h>
using namespace std;

char tam;
long n, k;
static long a[1000000];
static long b[1000000];
static long s[1000000];

int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> tam;
        if (tam == 'O')
            a[i] += 1;
        else b[i] += 1;
    }
    
    for (int i = 1; i <= n; i++)
    {
        s[i] = a[i] - k * b[i];   
    }
}