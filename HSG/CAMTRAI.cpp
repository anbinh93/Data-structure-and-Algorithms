#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

struct diem
{
   int x = 0, y = 0;

   bool operator == (const diem& tam)const
   {
       return x == tam.x && y == tam.y;
   }

   bool operator != (const diem& tam)const
   {
       return x != tam.x || y != tam.y;
   }

   //Map dùng toán tử  < này chứ ko dùng ==
   // !(a < b) && !(b < a) => a == b
   bool operator < (const diem& tam)const
   {
       return x < tam.x || x == tam.x && y < tam.y;
   }
};

long x, y;
bool co_duong_di = false;
diem bd, kt;

queue<diem> q;
vector<diem> v;
map<diem, diem> truy_vet;
map<diem, bool> dd;
static bool a[1000][1000];

bool kiem_tra(int _x, int _y, int hang_xom_x, int hang_xom_y)
{
   int tam = _x + _y;
   if (tam == 2 || tam == 0 || tam == -2 || hang_xom_x > x || hang_xom_y > y)
   {
       return false;
   }
   return true;
}

void tim()
{
   diem hien_tai, hang_xom;
   while (!q.empty())
   {
       hien_tai = q.front();
       dd[hien_tai] = true;
       if (hien_tai == kt)
       {
           cout << "Co duong di " << endl;
           co_duong_di = true;
           return;
       }

       for (int i = -1; i <= 1; i++)
       {
           for (int j = -1; j <= 1; j++)
           {
               //cout << hien_tai.x + i << " " << hien_tai.x + j << " " << !a[hien_tai.x + i][hien_tai.x + j] <<  " " << kiem_tra(i, j, hien_tai.x + i, hien_tai.y + j) << endl;
               if (kiem_tra(i, j, hien_tai.x + i, hien_tai.y + j) && !a[hien_tai.x + i][hien_tai.x + j])
               {
                   hang_xom = { hien_tai.x + i, hien_tai.y + j };

                   if (dd[hang_xom])
                       continue;

                   q.push(hang_xom);
                   truy_vet[hang_xom] = hien_tai;
               }
           }
       }
       q.pop();
   }
}

int main()
{
   cin >> x >> y >> bd.x >> bd.y >> kt.x >> kt.y;
   for (int i = 1; i <= x; i++)
   {
       for (int j = 1; j <= y; j++)
       {
           cin >> a[i][j];
       }
   }

   dd[bd] = true;
   q.push(bd);
   tim();

   if (!co_duong_di)
   {
       cout << "ko co duong di";
       return 0;
   }

   diem tam;
   tam = kt;
   while (tam != bd)
   {
       v.push_back(tam);
       tam = truy_vet[tam];
   }
   v.push_back(bd);
   for (int i = 0; i < v.size(); i++)
   {
       cout << v.back().x << " " << v.back().y << endl;
       v.pop_back();
   }
   cout << kt.x << " " << kt.y;
}
