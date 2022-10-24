#include<iostream>
#include<cstring>
#define chia_du 14062008
using namespace std;

static int a[10000000];
static unsigned long long f[10000000];
long n, m, tam;

unsigned long long tinh(long do_dai)
{
   for(int i = 3; i <= do_dai; i++)
   {
       if(a[i] == -1)
           continue;

       f[i] = f[i - 1] % chia_du + f[i - 2] % chia_du;
   }
   cout << endl;
   return f[do_dai] % chia_du;
}

int main()
{
	//freopen("VSTEPS.INP", "r", stdin);
	//freopen("VSTEPS.OUT", "w", stdout);
	cin >> n >> m; f[1] = 1; f[2] = 1;
	for (int i = 1; i <= m; i++)
	{
		cin >> tam;
		a[tam] = -1;
		if (a[tam] == -1 && a[tam - 1] == -1)
		{
			cout << 0;
			return 0;
		}
	}

   if(a[2] == -1)
       f[2] = 0;

	cout << tinh(n);
}
