#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 10000 + 5;

int c;

int main()
{
    freopen("in.txt", "r", stdin);
    long long ans[maxn];
    ans[1] = 2;
    fei(2, maxn)
        ans[i] = ans[i - 1] + 2 * 2 * (i - 1) + 1;
    //ans[2] = 7;
    cin >> c;
    while(c--)
    {
        int x;
        cin >> x;
        cout << ans[x] << endl;
    }
    return 0;
}

