#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

long n, tam;
vector<long> v1;
vector<long> v2;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> tam;
        if(tam % 2 == 0)
        {
            v1.push_back(tam);
        }
        else v2.push_back(tam);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), greater<int>());
    for(long p : v1)
        cout << p << " ";
    for(long p : v2)
        cout << p << " ";
}