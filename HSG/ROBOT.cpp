#include<iostream>
#include<algorithm>
using namespace std;

struct thuyet_trinh
{
	long batDau; long het; 
};

bool ss(thuyet_trinh tt1, thuyet_trinh tt2)
{
	// if (tt1.batDau < tt2.batDau && tt1.het > tt2.het)  
    //     return true; 
	// else if (tt1.batDau == tt2.batDau && tt1.het >= tt2.het)
    //     return true;
	if(tt1.het < tt2.het)
		return true;
	return false;
}

long n, o, p, tam, dem = 1;
static thuyet_trinh a[1000000];

int main()
{
	freopen("ROBOT.INP", "r", stdin);
    freopen("ROBOT.OUT", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> o >> p;
		a[i] = { o, p };
	}
	sort(a, a + n, ss);
	tam = a[0].het;
	for (int i = 0; i < n; i++)
	{
		//+cout << a[i].batDau << " " << a[i].het << '\n';
		if(a[i + 1].batDau >= tam)
		{
			dem++;
			tam = a[i + 1].het;
		}

	}
	cout << dem;
}