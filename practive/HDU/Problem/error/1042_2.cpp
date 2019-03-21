#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 10000 + 5;
long long ans[maxn];
int main()
{
    freopen("in.txt", "r", stdin);

    int n;

    // ans[1] = 1;
    ans[0] = 1;
    fei(1, maxn)
    {
        ans[i] = i * ans[i - 1];
        cout << i << " : " << ans[i] << endl;
    }
    while(cin >> n)
    {
        cout << ans[n] << endl;
    }
    return 0;
}

