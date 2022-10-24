#include <iostream>
using namespace std;

long viTri[1000000];
long soKien, doDaiDay, thoiGian = 0;

int main()
{
	freopen("ANTS.INP", "r", stdin);
	freopen("ANTS.OUT", "w", stdout);
	cin >> soKien >> doDaiDay;
	for(int i = 0; i < soKien; i++)
	{
		cin >> viTri[i];	
		if(viTri[i] > 0 && thoiGian < (doDaiDay - viTri[i]))
		{
			thoiGian = doDaiDay - viTri[i];
		}
		else if(viTri[i] < 0 && thoiGian < abs(viTri[i]))
		{
			thoiGian = abs(viTri[i]);
		}
	}	
	cout << thoiGian;
}