#include <iostream>
using namespace std;

int main() {
	long long a, b, c;
	cin >> a >> b >> c;
	if(a < b)
	{
		long long tmp = a;
		a = b;
		b = tmp;
	}
	if(a < c)
	{
		long long tmp = a;
		a = c;
		c = tmp;
	}
	if(b < c)
	{
		long long tmp = b;
		b = c;
		c = tmp;
	}
	cout << a << " "  << b << " " << c << endl;
}

