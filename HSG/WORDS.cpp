#include<iostream>
#include<string>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	//freopen("WORDS.INP", "r", stdin);
	//freopen("WORDS.OUT", "w", stdout);
	string a, boNhoTam;
	char boNhoTam2 = '*';
	getline(cin, a);
	for (char c : a)
	{
		if (!isspace(c))
		{
			boNhoTam.insert(boNhoTam.end(), c);
		}
		else if(isspace(c) && c != boNhoTam2)
		{ 
			cout << boNhoTam << '\n'; boNhoTam = "";
		}
		boNhoTam2 = c;
	}
	cout << boNhoTam << '\n';
}