#include<iostream>
#include<string>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	//freopen("CBRACKET.INP", "r", stdin);
	//freopen("CBRACKET.OUT", "w", stdout);
	string a; long boNhoTam = 0;
	while (getline(cin, a))
	{
		while (a.find("()") != string::npos)
		{
			a.erase(a.find("()"), 2);
		}
		(a.length() > 0) ? cout << "NO" << '\n': cout << "YES"<< '\n';
	}
} 