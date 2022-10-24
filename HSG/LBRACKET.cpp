#include<iostream>
#include<string>
using namespace std;

string s;
long dem = 0;
long dau = -1, cuoi, dd = -1;

int main()
{
    freopen("LBRACKET.INP", "r", stdin);
    freopen("LBRACKET.OUT", "w", stdout);
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        for(int j = i; j < s.length(); j++)
        {
            dem += ((s[j] == '(') ? 1 : -1);
            if(dem == 0 && j - i + 1 > dd)
            {
                dau = i + 1;
                cuoi = j + 1;
                dd = j - i + 1;
            }
            else if(dem < 0)
            {
                break;
            }
        }
        dem = 0;
    }
    if(dau == -1)
        cout << 0;
    else
    {
        cout << dd << endl;
        cout << dau << " " << cuoi;
    }

}
