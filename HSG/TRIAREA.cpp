/*#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip> 
#include <cmath>

using namespace std;
int main()
{
	//freopen("TRIAREA.INP", "r", stdin);
	//freopen("TRIAREA.OUT", "w", stdout);
	long double a, b, c, p, sTamGiac, R, r;
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	sTamGiac = sqrt(p * (p - a) * (p - b) * (p - c));
	R = (a * b * c) / (4 * sTamGiac);
	r = sTamGiac / p;
	cout << fixed << setprecision(4) << pow(R, 2) * M_PI - sTamGiac << " " << sTamGiac - pow(r, 2) * M_PI << " " << pow(r, 2) * M_PI;
}*/