#include <iostream>
#include <cstring>
#include <set>
#include <cmath>
using namespace std;

const int maxn = 1e6+10;
int n;
bool v[maxn];

int main()
{
    cin >> n;
    memset(v, 1, sizeof(v));
    for(int i = 2; i <= n; i++)
        if(v[i])
            for(int j = 2; i*j<=n; j++)
                v[i*j] = 0;
    while(n--)
    {
        long long d; cin >> d;
        int x = sqrt(d);
        if(x*x==d && v[x]) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
