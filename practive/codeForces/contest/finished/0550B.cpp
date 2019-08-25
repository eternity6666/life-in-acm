#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
const int inf = 1e9+10;
struct node
{
    int mi, ma;
    int sum;
    int now;
};
int n, l, r, x;
int c[20];

int main()
{
    cin >> n >> l >> r >> x;
    for(int i = 1; i <= n; i++)
        cin >> c[i];
    sort(c+1, c+n+1);
    queue<node> q;
    node tmp;
    tmp.mi = inf;
    tmp.ma = -inf;
    tmp.sum = 0;
    tmp.now = 1;
    q.push(tmp);
    tmp.ma = tmp.mi = tmp.sum = c[1];
    q.push(tmp);
    int ans = 0;
    while(!q.empty())
    {
        tmp = q.front(); q.pop();
        if(tmp.sum > r)
            continue;
        if(tmp.now==n)
        {
            if(tmp.sum>=l&&tmp.ma-tmp.mi>=x)
                ans++;   
            continue;
        }
        node tmp2;
        tmp2.mi = tmp.mi;
        tmp2.ma = tmp.ma;
        tmp2.sum = tmp.sum;
        tmp2.now = tmp.now + 1;
        q.push(tmp2);
        tmp2.mi = tmp2.mi > c[tmp2.now]?c[tmp2.now]:tmp2.mi;
        tmp2.ma = tmp2.ma < c[tmp2.now]?c[tmp2.now]:tmp2.ma;
        tmp2.sum += c[tmp2.now];
        q.push(tmp2);
    }
    cout << ans << endl;
    return 0;
}
