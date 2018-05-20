#include <bits/stdc++.h>
using namespace std;
#define usefre

int dr[4]={0,0,-1,1};
int dc[4]={1,-1,0,0};
const int maxn = 105;
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int r, c, tmp, max, min, ans = 0;
    int max_r,max_c,min_r,min_c;
    max = -10005;
    min = -max;
    int a[maxn][maxn]={0};
    bool vis[maxn][maxn]={true};
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
                // cout<<a[r][c]<<endl;
            if (a[i][j] <= min)
            {
                min=a[i][j];
                min_r=r;
                min_c=c;
            }
            if (a[i][j] >= max)
            {
                max=a[r][c];
                max_r=r;
                max_c=c;
            }
        }
    }
    // cout<<max<<endl<<min<<endl;
    int i=min_r,j=min_c;
    vis[i][j]=false;
    while(a[i][j]!=max)
    {
        
    }
    return 0;
}
