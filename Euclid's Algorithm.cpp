#include<iostream>
using namespace std;

int GCD(int a, int b)
{
	return b ? GCD(b, a % b) : a;
}

void LCM(int a, int b, int gcd)
{
	int lcm;
	lcm = (a * b)/gcd;
	cout << lcm << endl;
}

int main()
{
	int t, a, b, gcd;
	cin >> t;
	while(t--)
	{
		cin >> a;
		cin >> b;
		gcd = GCD(a, b);
		cout << gcd << " ";
		LCM(a, b, gcd);
	}
	
	return 0;
}
