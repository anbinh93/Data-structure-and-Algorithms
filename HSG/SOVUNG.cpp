#include<bits/stdc++.h>
using namespace std;

struct node {
    long x, y;
};

long m, n, k, dem = 0; 
long tam1, tam2, tam3, tam4;
bool a[1050][1050];
bool dd[1050][1050];
queue<node> q;

void BFS()
{
    node tam;
    while(!q.empty())
    {
        tam = q.front();
        for(int i = -1; i <= 1; i++) 
        for(int j = -1; j <= 1; j++)
        {
            if(dd[tam.x + i][tam.y + j] != true && a[tam.x + i][tam.y + j] == false && i + j != -2 && i + j != 2 && i + j != 0
            && tam.x + i >= 1 && tam.y + j >= 1 && tam.x + i <= m && tam.y + j <= n)
            {
                tam = node{tam.x + i, tam.y + j};
                dd[tam.x][tam.y] = true;
                q.push(tam);
            }
        }
        q.pop();
    }
}

int main()
{
    freopen("SOVUNG.INP", "r", stdin);
    freopen("SOVUNG.OUT", "w", stdout);
    cin >> m >> n >> k;
    for(int i = 1; i <= k; i++) 
    {
        cin >> tam1 >> tam2 >> tam3 >> tam4;
        if(tam1 == tam3)
        {
            for(int j = tam2; j <= tam4; j++)
            {
                a[j][tam1] = 1;
            }
        }
        else
        {
            for(int j = tam1; j <= tam3; j++)
            {
                a[tam2][j] = 1;
            }
        }
    }
    for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++)
    {
        if(a[i][j] == false && dd[i][j] == false)
        {
            q.push(node{i, j});
            BFS();
            cout << endl;
            for(int i = 1; i <= m; i++)
            {    for(int j = 1; j <= n; j++)
                {
                    cout << dd[i][j] << " ";
                }
                cout << endl;
            }
            dem++;
        }
    }
    cout << dem;
}