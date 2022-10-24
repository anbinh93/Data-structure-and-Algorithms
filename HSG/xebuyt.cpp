#include <iostream>
using namespace std;

int n, a, b, c[4001], d[4001], ans, x, y, r[1001][1001], k[4001], kq[4001], dem;

void ra(int z)
{
   for (int i = 0; i <= z; i++) 
       cout << kq[i] << " ";
   cout << endl;
}

void tim(int i)
{
   for (int j = 1; j <= n; j++)
   {
       // tồn tại đường đi từ điểm x[i-1] đến j, ở đây mảng r sử dụng để đánh dấu các đường được đi
       if (i <= dem && r[k[i - 1]][j] == 1 && d[j] == 0)
       {
           k[i] = j;
           d[j] = 1;
           if (j == b && i < dem)
           {
                dem = i;
                for (int p = 1; p <= dem; p++)
                {
                    kq[p] = k[p];
                }
           }
           else tim(i + 1);
           d[j] = 0;          
       }
   }
}
int main()
{
   freopen("XEBUYT.INP", "r", stdin);
   freopen("XEBUYT.OUT", "w", stdout);
   cin >> n >> a >> b;
   dem = 49; //so bat ky
   ans = 0;
   while (cin >> x >> y)
   {
       ans++;
       r[x][y] = 1;
       r[y][x] = 1;
   }

   k[0] = a;
   kq[0] = a;
   d[a] = 1;

   tim(1);

   if (dem != 49) 
       ra(dem);
   else 
       cout << -1;
}
