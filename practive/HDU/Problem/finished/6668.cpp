#include <iostream>
using namespace std;
const int maxn = 1010;

int f[maxn];
int g[maxn];

int gcd(int a, int b)
{
    return b == 0?a:gcd(b, a%b);
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int i;
        for(i = 0; i < n; i++)
            cin >> f[i];
        for(i = 0; i < n; i++)
            cin >> g[i];
        for(i = n - 1; i >= 0; i--)
        {
            if(f[i]==0&&g[i]==0)
                continue;
            else
            {
                if(f[i]==0)
                    cout << "0/1" << endl;
                else if(g[i]==0)
                    cout << "1/0" << endl;
                else
                {
                    int tmp = gcd(f[i], g[i]);
                    cout << f[i]/tmp << "/" << g[i]/tmp <<endl;
                }
                break;
            }
        }
    }
    return 0;
}
