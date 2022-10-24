#include<bits/stdc++.h>
using namespace std;

struct node {
    long x, y;
    node(){}
    node(long x, long y) : x(x), y(y){}
};

long n, vtx, vty;
long a[1000][1000];
bool dd[1000][1000];
node tv[1000][1000];
queue<node> q;
stack<node> s;

bool kt(long i, long j, node k) { return i + j != 2 && i + j != 0 && i + j != -2; }

void BFS()
{
    node tam = node(vtx, vty);
    q.push(tam);
    dd[tam.x][tam.y] = true;

    while(!q.empty()) 
    {
        tam = q.front();
        for(int i = -1; i <= 1; i++)
        for(int j = -1; j <= 1; j++)
        {
            if(a[tam.x + i][tam.y + j] == 0 && dd[tam.x + i][tam.y + j] == false && kt(i, j, tam))
            {
                tv[tam.x + i][tam.y + j] = tam;

                tam = node(tam.x + i, tam.y + j);
                dd[tam.x][tam.y] = true;
                q.push(tam);
                if(tam.x == n || tam.y == n || tam.x == 1 || tam.y == 1)
                {
                    cout << 1;
                    exit(0);
                }
            } 
        }
        q.pop();
    }
}

int main()
{
    cin >> n >> vtx >> vty;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    BFS();
    cout << 0;
}