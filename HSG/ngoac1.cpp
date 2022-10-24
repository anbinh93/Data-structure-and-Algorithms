//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	//freopen("NGOAC.INP", "r", stdin);
//	//freopen("NGOAC.OUT", "w", stdout);
//	long dem = 0, vtc = 0, vtd = 1, doDai = 0, tam = 0;
//	bool q = false;
//	string s;
//	getline(cin, s);
//	for (int i = 0; i <= s.length(); i++)
//	{
//		(s[i] == '(') ? dem++ : dem--; tam++;
//		if (dem < 0 && doDai < tam)
//		{
//			q = true;
//			doDai = tam - 1;
//			vtc = i; vtd = vtc - doDai + 1;
//			tam = 0; dem = 0;
//		}
//	}
//	if (!q)
//	{
//		cout << s.length() << '\n' << 1 << " " << s.length();
//		return 0;
//	}
//	cout << doDai << '\n' << vtd << " " << vtc;
//}