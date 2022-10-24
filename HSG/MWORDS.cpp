//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
//	freopen("MWORDS.INP", "r", stdin);
//	freopen("MWORDS.OUT", "w", stdout);
//	long lonNhat = 0, boNhoTam = 0;
//	string a;
//	getline(cin, a);
//	for (char c : a)
//	{
//		if (!isspace(c))
//		{
//			boNhoTam++;
//		}
//		else
//		{
//			lonNhat = (boNhoTam > lonNhat) ? boNhoTam : lonNhat;
//			boNhoTam = 0;
//		}
//		if (c == a.back())
//		{
//			lonNhat = (boNhoTam > lonNhat) ? boNhoTam : lonNhat;
//		}
//	}
//	cout << lonNhat;
//}