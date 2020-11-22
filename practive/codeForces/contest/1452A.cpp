#include <iostream>
using namespace std;

void deal(int x, int y)
{
    if(x>y)
    {
        int tmp = y;
        y = x;
        x = tmp;
    }
    cout << x * 2 + max(0, 2 * (y - x) - 1) << endl;
}

int main()
{
	int t;
	cin >> t;
	int x, y;
	while(t--)
	{
		cin >> x >> y;
		deal(x, y);
	}
	return 0;
}

