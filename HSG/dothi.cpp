#include<iostream>
#include<queue>
using namespace std;

static bool a[1000][1000];
static bool dd[10000000];
static long truoc[100000];
static long kq[1000000];
static queue<long> q;
long n, k, l, tam1, tam2, tam3 = 0;

void in(long dinh)
{
  long x;
	dd[dinh] = true;
  q.push(dinh);
  truoc[dinh] = dinh;
  while (tam3 != 0)
  {
      x = q.front();
      for (int j = 1; j <= n; j++)
      {
          if (dd[j] == false && a[x][j])
          {
              q.push(j);
              dd[j] = true; truoc[j] = x;
              if (j == l)return;
          }
      }
      tam3--;
      q.pop();
  }
}

int main()
{
  //freopen("dothi.inp", "r", stdin);
	cin >> n >> k >> l;
  while (cin >> tam1 >> tam2)
  {
      a[tam1][tam2] = a[tam2][tam1] = true;
      tam3++;
  }
  in(k);
  if (truoc[l] == 0)
  {
      cout << "ko co duong di"; return 0;
  }
  else
  {
      long dem = 0;
      kq[dem++] = l;
      while (l != k)
      {
          kq[dem++] = truoc[l];
          l = truoc[l];
      }
      kq[dem] = k;
      for (int i = dem - 1; i >= 0; i--)
          cout << kq[i] << endl;
  }
}
