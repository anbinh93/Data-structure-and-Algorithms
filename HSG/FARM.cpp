#include<bits/stdc++.h>
using namespace std;

struct node {long x, y;};

long m, n, c = 0, f = 0;
char a[1000][1000];
bool dd[1000][1000];
queue<node> q;

void BFS()
{
    node tam;
    long c = 0, f = 0;
    while(!q.empty())
    {
        tam = q.front();
        dd[tam.x][tam.y] = true;
        if(a[tam.x][tam.y] == 'c')
            c++;
        else if(a[tam.x][tam.y] == 'f')
            f++;
        for(int i = -1; i <= 1; i++)
        for(int j = -1; j <= 1; j++)     
        {
            tam = node{tam.x + i, tam.y + j};
            if(dd[tam.x][tam.y] == false && a[tam.x][tam.y] != '#' && i + j != -2 && i + j != 2 && i + j != 0
            && a[tam.x][tam.y] != 0) 
            {
                dd[tam.x][tam.y] = true;
                q.push(tam);
            }
        }   
        q.pop();
    }
    if(c <= f)
    {
        ::c -= c;
    }
    else if(c > f)
    {
        ::f -= f;
        cout << c << " " << f << endl;;
    }
}

int main()
{
    cin >> m >> n;
    for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++)
    {
        cin >> a[i][j];
        if(a[i][j] == 'c')
            c++;
        else if(a[i][j] == 'f')
            f++;
    }
    for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++)
    {
        if(a[i][j] != '#' && dd[i][j] == false)
        {
            q.push(node{i, j});
            BFS();
        }
    }
    cout << f << " " << c;
}