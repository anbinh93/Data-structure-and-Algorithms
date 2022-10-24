#include <bits/stdc++.h>
using namespace std;
int m, p, n;
int cs(int a)
{
    int s=0;
    while (a) {        
s+=a%10; a/=10;    
}
    return s;
}
int check(int a)
{
    m=cs(a);
    p=0;
    int i=2;
    while (i*i<=a)
    {
        if (a%i==0) {            
p+=cs(i); a/=i;        
}
        else i++;
    }
    if (p==0) return 1;
    else return (m==p+cs(a));
}
int main()
{
    freopen("SODB.inp", "r", stdin);
    freopen("SODB.out", "w", stdout);
    cin>>n;
    while (2020)
    {
        n++;
        if (check(n)) {            
cout<<n; return 0;        
}
    }
}
