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

char tam;
long n, m, q1, e1, q2, e2;
static bool a[1000][1000];
static bool b[1000][1000];
queue<diem> q;

bool kiem_tra(int _x, int _y, int hang_xom_x, int hang_xom_y)
{
   int tam = _x + _y;
   if (tam == 2 || tam == 0 || tam == -2 || hang_xom_x > n + 1 || hang_xom_y > m + 1 || hang_xom_x < 0 || hang_xom_y < 0)
   {
       return false;
   }
   return true;
}

bool tim(diem d1, diem d2, bool dc) 
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
                if (kiem_tra(i, j, hien_tai.x + i, hien_tai.y + j) && a[hien_tai.x + i][hien_tai.y + j] == dc && b[hien_tai.x + i][hien_tai.y + j] == false)
                {
                    hang_xom.x = hien_tai.x + i; hang_xom.y = hien_tai.y + j;
                    if(hang_xom.x == d2.x && hang_xom.y == d2.y)
                        return true;
                    q.push(hang_xom);
                }
            }
        }
        q.pop();
    }
    return false;
}

int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> tam;
            a[i][j] = ((tam == 'A') ? 1 : 0);
        }
    }
    while(cin >> q1 >> e1 >> q2 >> e2)
    {
        memset(b, 0, sizeof(b));
        while(!q.empty())
            q.pop();
        cout << tim(diem(q1, e1), diem(q2, e2), a[q1][q2]) << endl;
    }
}