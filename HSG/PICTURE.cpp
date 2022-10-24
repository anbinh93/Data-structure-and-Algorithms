#include<iostream>
#include<queue>
using namespace std;

struct diem
{
    long x, y;
    diem(long x, long y) : x(x), y(y) {}
};

long n, m, dem = 0;
bool dc = true;
static long a[1000][1000];
static bool dd[1000][1000];
static bool dinh[1000][1000];
queue<diem> q;

bool kt(diem d, diem d2, long v)
{
    if(d.x > n || d.y > m || dd[d.x][d.y] == true || d.x <= 0 || d.y <= 0 
        || dinh[d.x][d.y] == false)
        return false;
    return true;
}

void tim()
{
    while(!q.empty())
    {
        diem tam = q.front();
        dd[tam.x][tam.y] = true;
        for(int i = -1; i <= 1; i++)
        {
            for(int j = -1; j <= 1; j++)
            {
                diem hx = diem(tam.x + i, tam.y + j);
                //cout << i << " " << j << " " << tam.x << " " << tam.y << endl;
                if(kt(hx, tam, i + j))
                {
                    dd[hx.x][hx.y] = true;
                   // cout << hx.x << " " << hx.y << endl;
                    q.push(hx);
                }
            }
        }
        q.pop();
    }
}

int main()
{
    //freopen("PICTURE.INP", "r", stdin);
    //freopen("PICTURE.OUT", "w", stdout);
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
            for(int _i = -1; _i <= 1; _i++)
            {
                for(int _j = -1; _j <= 1; _j++)
                {
                    if(a[i][j] < a[_i + i][_j + j])
                        dc = false;
                }
            }   
            if(dinh[i][j] != true)
                dinh[i][j] = dc;
            if(dc == true)
            {
                for(int _i = -1; _i <= 1; _i++)
                {
                    for(int _j = -1; _j <= 1; _j++)
                    {
                        if(a[i + _i][j + _j] != 0)
                            dinh[i + _i][j + _j] = dc;
                    }
                } 
            }
            dc = true;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cout << dinh[i][j] << ' ';
        }
        cout << endl;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(dd[i][j] == false && dinh[i][j] == true) 
            {
                q.push(diem(i, j));
                dem++;
            }
        }
    }
    cout << dem;
}