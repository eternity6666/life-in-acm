#include <iostream>
using namespace std;
const int mod = 10007;
const int maxn = 1000000 + 5;
int f[maxn];

int n, m;

int main()
{
    f[1] = f[2] = 1;
    m = 2;
    while (cin >> n)
    {
        if (n > m)
        {
            for (int i = m; i <= n; i++)
                f[i] = (f[i - 1] + f[i - 2]) % mod;
            m = n + 1;
        }
        cout << f[n] << endl;
    }
    return 0;
}