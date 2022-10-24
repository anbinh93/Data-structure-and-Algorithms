#include<iostream>
using namespace std;

long n, tam = 1;
long diem, dai = -1;
static long a[1000000];

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++)
    {

        if(a[i] <= a[i + 1])
        {
            tam++;
        }
        else
        {
            if(tam > dai)
            {
                dai = tam;
                diem = i - tam + 1;
            }
            tam = 1;
        }
    }
    // for(int i = 1; i <= n; i++)
    // {
    //     for(int j = i; j <= n; j++)
    //     {
    //         if(a[j] <= a[j + 1])
    //         {
    //             tam++;
    //         }
    //         else
    //         {
    //             if(tam > dai)
    //             {
    //                 dai = tam;
    //                 diem = i;
    //             }
    //             tam = 1;
    //         }
    //     }
    // }
    cout << diem << " " << dai;
}