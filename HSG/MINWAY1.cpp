#include<iostream>
#include<queue>
#include<stdio.h>
#include<cstring>
using namespace std;

long tam1, tam2, tam3, tam4, tam5;
long n, m, k;
queue<long> q;
static long a[10000][10000];
static long tv[1000000];
static bool dd[1000000];
static long gt[1000000];

void tim(long dinh)
{
   q.push(dinh);
   while(!q.empty())
   {
       dd[q.front()] = true;
       for(int i = 1; i <= n; i++)
       {
           if(dd[i] == false && a[q.front()][i] != 0)
           {
               if(gt[i] > gt[q.front()] + a[q.front()][i])
               {
                   gt[i] = gt[q.front()] + a[q.front()][i];
                   tv[i] = q.front();
               }
               q.push(i);
           }
       }
       q.pop();
   }
}

int main()
{
   freopen("MINWAY1.INP", "r", stdin);
   freopen("MINWAY1.OUT", "w", stdout);
   cin >> n >> m >> k;
   for(int i = 1; i <= m; i++)
   {
       cin >> tam1 >> tam2 >> tam3;
       a[tam1][tam2] = tam3; a[tam2][tam1] = tam3;
   }
   while(cin >> tam4 >> tam5)   
   {
       memset(gt, 1, sizeof(gt));
       memset(dd, 0, sizeof(dd));
       gt[tam4] = 0;
       tim(tam4);
       cout << gt[tam5] << endl;
   }
}