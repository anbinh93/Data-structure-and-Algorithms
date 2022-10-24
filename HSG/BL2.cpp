#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	long long n, MT, NM, HM, M, N, MTs = 0, NMs = 0, HMs = 0, Ms = 0, Ns = 0;
	bool end_flag = false;
	cin >> n >> MT >> NM >> HM >> M >> N;	
	while(n > 0)
	{
		if (MT != 0 && n - 100 >= 0) { n -= 100; MTs++; MT--; end_flag = false; }
		else if (NM != 0 && n - 50 >= 0) { n -= 50; NMs++; NM--; end_flag = false; }
		else if (HM != 0 && n - 20 >= 0) { n -= 20; HMs++; HM--; end_flag = false; }
		else if (M != 0 && n - 10 >= 0) { n -= 10; Ms++; M--; end_flag = false; }
		else if (N != 0 && n - 5 >= 0) { n -= 5; Ns++; N--; end_flag = false; }
		if (MT + NM + HM + M + N == 0 || end_flag) break;
		end_flag = true;
	}
	cout << n << " " << MTs << " " << NMs << " " << HMs << " " << Ms << " " << Ns;
}
