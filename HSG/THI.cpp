#include<iostream>
#include<queue>
#include<vector>
using namespace std;

long tam1, tam2;
long n, m, k;
static vector<long> a[10000];
static bool dd[10000];
static vector<long> d[10000];
queue<long> q;

void tim(long p)
{
    while(!q.empty())
    {
        long tam = q.front();
        q.pop();
        if(tam != 1 && tam != n)
            dd[tam] = true;
        for(long i : a[tam])
        {
            if(dd[i] == 0)
            {
                dd[i] = true;
                d[tam].push_back(i);
                q.push(i);
            }
        }
    }
}

int main()
{
    cin >> n >> m >> k;
    for(int i = 1; i <= m; i++)
    {
        cin >> tam1 >> tam2;
        a[tam1].push_back(tam2);
        a[tam2].push_back(tam1);
    }
    tim(1);
    for(int i = 1; i <= n; i++)
    {
        if(dd[i] == false)
        {
            cout << "NO";
            return 0;
        }
    }
    
}