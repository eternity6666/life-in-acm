#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;
const int maxn = 10;

int n, k;
char c[maxn][maxn];
bool flag[maxn][maxn];

int ans;

void init();
void dfs();


int main()
{
    freopen("in.txt", "r", stdin);
    while(cin >> n >> k)
    {
        if(n == -1 && k == -1)
            break;
        init();
        fei(1, n)
            fej(1, n)
                scanf("%c", &c[i][j]);
        
        cout << ans << endl;
    }
    return 0;
}

void init()
{
    ans = 0;
    fei(1, n)
        fej(1, n)
            flag[i][j] = 1;
}
