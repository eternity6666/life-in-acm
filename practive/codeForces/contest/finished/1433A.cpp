#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
//		cout << s << endl;
		int c = s[0] - '0';
		int ans = 10 * (c-1);
		int len = s.length();
		cout << ans + (len + 1) * len / 2 << endl;
	}
	return 0;
}

