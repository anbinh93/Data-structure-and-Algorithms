#include<iostream>
#include<queue>
#include<stdio.h>
using namespace std;

struct luu
{
    long long nam, nu;
};

long n, m, dem = 0, tam;
static bool nam[100000];
static long long nu[100000];
queue<luu> q;
luu _tam;

int main()
{
    //freopen("LIW.INP", "r", stdin);
    //freopen("LIW.OUT", "w", stdout);
    cin >> n >> m;
    for(int i = 1; i <= n; i++) 
    {
        cin >> tam;
        nam[tam] = true;
    }
    for(int i = 1; i <= m; i++)
    {
        cin >> nu[i];
    }
    for(int i = 1; i <= m; i++)
    {
        cin >> tam;
        if(nam[tam])
        {
            _tam.nam = tam; _tam.nu = nu[i];
            q.push(_tam);
            dem++;
        }
    }
    cout << dem << endl;
    while(!q.empty())
    {
        cout << q.front().nam << " " << q.front().nu << endl;
        q.pop();
    }
}