#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 100000 + 5;

bool lamps[maxn];
int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    memset(lamps, 0, maxn);
    fei(1, maxn)
    {
        for(int j = 1; j * i <= maxn; j++)
        {
            lamps[i * j] = !lamps[i * j];
        }
    }
    while(~scanf("%d", &n))
    {
        if(lamps[n])
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}

