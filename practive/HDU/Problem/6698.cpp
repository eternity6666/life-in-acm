#include <iostream>
using namespace std;
const int maxn = 1e5+10;

int a[maxn], b[maxn], f[2*maxn], n;
int y[maxn];

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i] >> b[i];
            b[i]+=a[i];
        }
        
        for(int i = 1; i <= 2*n; i++)
        {
            
            cout << f[i] << (i==2*n?"\n":" ");
        }
    }
    return 0;
}
