#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 40;
long long ans[maxn];
long long a[maxn];
void got_ans();
int main()
{
    freopen("in.txt", "r", stdin);
    
    memset(ans, 0, maxn);
    got_ans();

    int n;
    while(~scanf("%d", &n))
        cout << ans[n] << endl;
    return 0;
}

void got_ans()
{
    ans[1] = a[1] = 2;
    fei(2, 35)
    {
        a[i] = a[i - 1] * 3;
        ans[i] = ans[i - 1] + a[i];
    }
}
