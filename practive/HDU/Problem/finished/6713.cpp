#include <iostream>
#include <cstring>
using namespace std;
const int maxn = 1e5 + 10;
const int inf = 0x3f3f3f3f;

/*
int d[maxn];
bool v[maxn];

void init()
{
    memset(d, inf, sizeof(d));
    memset(v, 1, sizeof(v));
    d[1] = 0;
    for(int i = 0; i < 100000; i++)
    {
        int k = -1;
        int mi = inf;
        for(int j = 1; j <= 100000; j++)
            if(v[j] && d[j]<mi)
            {
                mi = d[j];
                k = j;
            }
        if(k==-1)
            break;
        v[k] = 0;
        for(int j = 1; j <= 100000; j++)
        {
            d[j] = d[j]<d[k]+(k^j)?d[j]:d[k]+(k^j);
        }
    }
}
*/

int main()
{
    int t = 0;
    cin >> t;
    // init();
    // for(int i = 1; i <= 100000; i++)
    //     cout << d[i] << ", ";
    // cout << endl;
    // for(int i = 1; i <= 10; i++)
    //     for(int j = 1; j <= 10; j++)
    //         cout << (i^j) << (j==10?"\n": " ");
    while(t--)
    {
        int n; cin >> n;
        cout << n + (n%2?-1:1) << endl;
    }
    return 0;
}
