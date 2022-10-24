#include<iostream>
using namespace std;

static long s[1000000];
long n, dem = 0;
char tam;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> tam;
        s[i] = s[i - 1] + ((tam == '+') ? 1 : 0);
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = i + 2; j <= n; j += 2)
        {
            cout << i << " " << j << " " << s[j] << " " << s[i - 1] << endl;
            if(((s[j] - s[i - 1]) / (j - i)) % 2 == 0)
                dem++;
        }
    }
    cout << dem;
}