#include <iostream>
using namespace std;

int n, m;
bool v(int a)
{
    int ans = 0;
    while (a)
    {
        int b = a % 10;
        a /= 10;
        ans += b * b;
    }
    return ans == m;
}

int main()
{
    cin >> n >> m;
    if (m > 486)
        cout << 0 << endl;
    else
    {
        int ans = 0;
        for (int i = 1; i <= n; ++i)
            if (v(i))
                ans++;
        cout << ans << endl;
    }
    return 0;
}
