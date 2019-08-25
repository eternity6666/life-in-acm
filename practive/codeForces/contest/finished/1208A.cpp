#include <iostream>
using namespace std;
const int maxn = 10;

int f[maxn];

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        f[0] = a;
        f[1] = b;
        for(int i = 2; i < maxn; i++)
        {
            f[i] = f[i-1]^f[i-2];
            // cout << f[i] << " ";

        }
        cout << f[n % 3] << endl;
    }
    return 0;
}
