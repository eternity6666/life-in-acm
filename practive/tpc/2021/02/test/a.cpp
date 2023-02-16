#include <iostream>
using namespace std;

// zero = 0, x - y = 1
bool deal(int zero, int x, int y)
{
    int tmp = x - y;
    if (tmp < 0)
        tmp = -tmp;
    return tmp <= zero + 1;
}

int main() 
{
	int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int zero = 0;
        int zs = 0;
        int fs = 0;
        for (int i = 0; i < n; ++ i)
        {
            int tmp;
            cin >> tmp;
            if (tmp == 0) ++zero;
            else if (tmp > 0) ++zs;
            else ++fs;
        }
        bool ans = deal(zero, zs, fs);
        cout << (ans ? "Yes" : "No") << endl;
    }
    return 0;
}

