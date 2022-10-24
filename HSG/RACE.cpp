#include<iostream>
using namespace std;

struct diem
{
    long t,p,g;
};

long n, m;
static long a[10000][10000];
static diem b[10000][10000];

int main() 
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++) 
    {
        for(int j = 1; j <= m; j++) 
        {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++) 
    {
        for(int j = 1; j <= m; j++) 
        {
            
        }
    }
}