#include<iostream>
#include<cstring>
#include<queue>
using namespace std;

struct diem
{
    long x, y;
    diem(long x, long y) : x(x), y(y){}
    diem(){}
};

long n, dem = 0;
static bool a[1000][1000];
static bool b[1000][1000];
queue<diem> q;

bool kiem_tra(int _x, int _y, int hang_xom_x, int hang_xom_y)
{
   int tam = _x + _y;
   if (hang_xom_x > n + 1 || hang_xom_y > n + 1 || hang_xom_x < 0 || hang_xom_y < 0)
   {
       return false;
   }
   return true;
}

bool tim(diem d1) 
{
    diem hang_xom, hien_tai;
    q.push(d1);
    while (!q.empty())
    {
        hien_tai = q.front();
        b[hien_tai.x][hien_tai.y] = true;
        for (int i = -1; i <= 1; i++)
        {
            for (int j = -1; j <= 1; j++)
            {
                if (kiem_tra(i, j, hien_tai.x + i, hien_tai.y + j) && b[hien_tai.x + i][hien_tai.y + j] == false && a[hien_tai.x + i][hien_tai.y + j] == true)
                {
                    hang_xom.x = hien_tai.x + i; hang_xom.y = hien_tai.y + j;
                    b[hien_tai.x][hien_tai.y] = true;
                    q.push(hang_xom);
                }
            }
        }
        q.pop();
    }
}

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(a[i][j] == true && b[i][j] == false)
            {
                dem++;
                tim(diem(i, j));
            }
        }
    }
    cout << dem;
}