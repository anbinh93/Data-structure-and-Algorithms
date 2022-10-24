#include <bits/stdc++.h>
using namespace std;

long n, p, r;
string s;
char c;
map <int, int> dem;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> p >> r;
        if (p == 0)
        {
            cin >> c;
            s.push_back(c);
        } 
        else 
        {
            int dai = s.size();
            for(int i = 0; i < r; i++)
                s.push_back(s[dai - p + i]);
        }
    }

    for(char c : s)
        dem[c]++;
    char da = 'a';
    for(int i = 'b'; i <= 'z'; i++)
        if (dem[i] > dem[da])
            da = i;
    cout << da << dem[da];
}
