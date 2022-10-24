#include<bits/stdc++.h>
using namespace std;

struct node {
    long x, y;
};

long n, m, vtx, vty;
long a[1000][1000];
bool dd[1000][1000];
node tv[1000][1000];
queue<node> q;


void kq(node k)
{
    stack<node> s;
    while(k.x != vtx || k.y != vty)
    {
        cout << k.x << ' ' << k.y << '\n';
        s.push(k);
        k = tv[k.x][k.y];
    }
    cout << s.size() + 1 << '\n';
    cout << vtx << ' ' << vty << '\n';
    while(!s.empty())
    {
        k = s.top();
        cout << k.x << " " << k.y << '\n';
        s.pop();
    }
    exit(0);
}

void BFS()
{
    node tam;

    while(!q.empty()) 
    {
        tam = q.front();
        for(int i = -1; i <= 1; i++)
        for(int j = -1; j <= 1; j++)
        {
            if(a[tam.x + i][tam.y + j] == 0 && dd[tam.x + i][tam.y + j] == false && i + j != 2 && i + j != 0 && i + j != -2)
            {
                tv[tam.x + i][tam.y + j] = tam;
                tam = node{tam.x + i, tam.y + j};
                dd[tam.x][tam.y] = true;
                q.push(tam);
                if(tam.x == m || tam.y == n || tam.x == 1 || tam.y == 1)
                {
                    kq(tam);
                }
            } 
        }
        q.pop();
    }
}

int main()
{
    cin >> m >> n >> vtx >> vty;
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }

    q.push(node{vtx, vty});
    dd[vtx][vty] = true;
    BFS();

    cout << 0;
}