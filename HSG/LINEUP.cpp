#include <iostream>
#include <stack>
using namespace std;

struct diem
{
    long gt, vt;   
};

static diem a[1000000];
long n;
stack<diem> s;

int main()
{
    freopen("LINEUP.INP", "r", stdin);
    freopen("LINEUP.OUT", "w", stdout);
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].gt;
        a[i].vt = i;
    }

    s.push(a[0]);
    cout << -1 << " ";

    for (int i = 1; i < n; i++)
    {
        if(a[i].gt < s.top().gt)
        {
            cout << s.top().vt << " ";
            s.push(a[i]);
        }
        else if (a[i].gt >= s.top().gt)
        {
            while(!s.empty())
            {
                if(a[i].gt < s.top().gt)
                {
                    cout << s.top().vt << " ";
                    s.push(a[i]);
                    break;
                }
                s.pop();
                if(s.empty())
                {
                    cout << -1 << " ";
                    s.push(a[i]);
                    break;
                }
            }
        }
    }
}