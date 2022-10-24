#include <iostream>
#include <queue>
using namespace std;

struct diem
{
	long x, y;

    diem(long x, long y) : x(x), y(y){}
    diem(){}

	bool operator == (const diem& tam)const
	{
		return x == tam.x && y == tam.y;
	}

	bool operator < (const diem& tam)const
    {
        return x < tam.x || x == tam.x && y < tam.y;
    }
};

long hang, cot;
long ga, cao, _ga = 0, _cao = 0;
static char a[1000][1000];
static bool dd[1000][1000];
queue<diem> q;

bool kiem_tra(int _x, int _y, int hang_xom_x, int hang_xom_y)
{
   int tam = _x + _y;
   if (tam == 2 || tam == 0 || tam == -2 || hang_xom_x > hang || hang_xom_y > cot || hang_xom_y < 0 || hang_xom_x < 0 || 
       a[hang_xom_x][hang_xom_y] == '#') 
   {
       return false;
   }
   return true;
}

void tim()
{
   diem hang_xom, hien_tai;
   while (!q.empty())
   {
       hien_tai = q.front();
       dd[hien_tai.x][hien_tai.y] = true;
       for (int i = -1; i <= 1; i++)
       {
           for (int j = -1; j <= 1; j++)
           {
               if (kiem_tra(i, j, hien_tai.x + i, hien_tai.y + j) && dd[hien_tai.x + i][hien_tai.y + j] == false)
               {
                   if(a[hien_tai.x + i][hien_tai.y + j] == 'f')
                   {
                       ga++;
                   }
                   else if(a[hien_tai.x + i][hien_tai.y + j] == 'c')
                   {
                       cao++;
                   }
                   hang_xom.x = hien_tai.x + i; hang_xom.y = hien_tai.y + j;
                   dd[hang_xom.x][hien_tai.y] = true;
                   q.push(hang_xom);
               }
           }
       }
       q.pop();
   }
}

int main()
{
    cin >> hang >> cot;
    for(int i = 1; i <= hang; i++)
    {
        for(int j = 1; j <= cot; j++)
        {
            cin >> a[i][j]; 
            if(a[i][j] == 'f')
            {
                _ga++;
            }
            else if(a[i][j] == 'c')
            {
                _cao++;
            }
        }
    }
    for(int i = 1; i <= hang; i++)
    {
        for(int j = 1; j <= cot; j++)
        {
            if(a[i][j] == '.' && dd[i][j] == false)
            {
                ga = 0;
                cao = 0;
                while(!q.empty())
                    q.pop();
                q.push(diem(i, j));
                tim();
                if(ga > cao)
                {
                    _cao -= cao;
                }
                else if (ga < cao)
                {
                    _ga -= ga;
                }
            }
        }
    }
    cout << _ga << " " << _cao << endl;
}