#include<bits/stdc++.h>
using namespace std;

struct node 
{
    long x, y;
};

long n, m, vtx, vty;
char a[1050][1050];
bool dd[1050][1050];
node tv[1050][1050];
queue<node> q;
stack<char> s;

void kq(node k1)
{
    node k2 = tv[k1.x][k1.y];
    long tamx, tamy;
    while(vtx != k1.x || vty != k1.y)
    {
        tamx = k2.x - k1.x;
        tamy = k2.y - k1.y;

        if(tamx == -1 && tamy == 0)
            s.push('S');
        else if(tamx == 0 && tamy == 1)
            s.push('W');
        else if(tamx == 0 && tamy == -1)
            s.push('E');
        else
            s.push('N');

        k1 = k2;
        k2 = tv[k1.x][k1.y];
    }
    while(!s.empty()) 
    {    
        cout << s.top(); s.pop();
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
            if(dd[tam.x + i][tam.y + j] != true && a[tam.x + i][tam.y + j] == '.' && i + j != -2 && i + j != 2 && i + j != 0)
            {
                tv[tam.x + i][tam.y + j] = tam;
                tam = node{tam.x + i, tam.y + j};
                dd[tam.x][tam.y] = true;
                q.push(tam);
                if(tam.x == 1 || tam.y == 1 || tam.x == m || tam.y == n)
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
    freopen("LABYRINTH.INP", "r", stdin);
    freopen("LABYRINTH.OUT", "w", stdout);
    cin >> m >> n;
    for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++)
    {
        cin >> a[i][j];
        if(a[i][j] == '*')
        {
            q.push(node{i, j});
            vtx = i; vty = j;
        }
    }
    BFS();
}