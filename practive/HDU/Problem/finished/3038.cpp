#include <iostream>
using namespace std;
const int maxn = 2e5+10;

int n, m;
int father[maxn], ran[maxn], ans = 0;

int findX(int x)
{
    if(x == father[x]) return x;
    int tmp = father[x];
    father[x] = findX(tmp);
    ran[x] += ran[tmp];
    return father[x];
}

void merge(int x, int y, int k)
{
    int xx = findX(x);
    int yy = findX(y);
    if(xx==yy)
    {
        if((ran[y]-ran[x])!=k)
            ans++;
        return;
    }
    if(xx > yy)
    {
        father[xx] = yy;
        ran[xx] = ran[y] - ran[x] - k;
    }
    else
    {
        father[yy] = xx;
        ran[yy] = ran[x] + k - ran[y];
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
    while(cin >> n >> m)
    {
        for(int i = 0; i <= n; ++i)
            father[i] = i, ran[i] = 0;
        ans = 0;
        for(int i = 0; i < m; ++i)
        {
            int x, y, k; cin >> x >> y >> k;
            x--;
            merge(x,y,k);
        }
        cout << ans << endl;
    }
    return 0;
}
