#include <bits/stdc++.h>
using namespace std;

struct node
{
    long x, y;
};

long n, m;
char tam;
char a[1050][1050];
long d[1050][1050];
deque<node> q;

void BFS()
{
    node tam;
    while (!q.empty())
    {
        tam = q.front();
        q.pop_front();
        for (int i = -1; i <= 1; i++)
            for (int j = -1; j <= 1; j++)
            {
                //cout << tam.x + i << " " << tam.y + j << endl;
                if (a[tam.x + i][tam.y + j] == 0 || tam.x + i == 1 || tam.x + i == n)
                    continue;

                if (a[tam.x + i][tam.y + j] == '.' && d[tam.x + i][tam.y + j] > d[tam.x][tam.y] + 1)
                {
                    d[tam.x + i][tam.y + j] = d[tam.x][tam.y] + 1;
                    q.push_back(node{tam.x + i, tam.y + j});
                }
                else if (a[tam.x + i][tam.y + j] == '#' && d[tam.x + i][tam.y + j] > d[tam.x][tam.y])
                {
                    d[tam.x + i][tam.y + j] = d[tam.x][tam.y];
                    q.push_front(node{tam.x + i, tam.y + j});
                }
            }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("PATH.INP", "r", stdin);
	freopen("PATH.OUT", "w", stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }

    memset(d, 1, sizeof(d));
    for (int i = 1; i <= n; i++)
    {
        if (a[i][1] == '.')
        {
            d[i][1] = 1;
            q.push_back(node{i, 1});
        }
        else
        {
            d[i][1] = 0;
            q.push_front(node{i, 1});
        }
    }
    BFS();
    long nn = 9999;
    for(int i = 2; i <= n - 1; i++)
    {
        nn = (d[i][m] < nn) ? d[i][m] : nn;
    }
    cout << nn;
}