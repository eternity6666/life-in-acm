#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <cstring>
#include <cstdio>
using namespace std;
const int maxn = 1e5 + 10;
typedef long long ll;

struct P{
    int key, child, value;
    P(){}
    P(int ke, int va, int ch)
    {
        key = ke, child = ch, value = va;
    }
    bool operator < (const P &a) const
    {
        if(a.child != child) return a.child < child;
        return a.value != value ? a.value > value : a.key < key;
    }
};

int node[maxn], n;
int child[maxn];
bool v[maxn];
ll s, e;

int main()
{
    int t; scanf("%d", &t);
    while(t--)
    {
        s = e = 0;
        memset(node, -1, sizeof(node));
        memset(v, 0, sizeof(v));
        scanf("%d", &n);
        priority_queue<P> q;
        for(int i = 1; i <= n; ++i)
        {
            scanf("%d", &node[i]);
            child[i] = (2*i<=n?1:0)+(2*i+1<=n?1:0);
            if(child[i] == 0)
                q.push(P(i, node[i], child[i]));
        }
        int tmp = 0;
        while(!q.empty())
        {
            P p = q.top();
            q.pop();
            if(v[p.key])
                continue;
            v[p.key] = 1;
            tmp++;
            (tmp%2==1)?(s+=p.value):(e+=p.value);
            if(p.key==1)
                break;
            child[p.key/2]--;
            if(child[p.key/2] == 0)
                q.push(P(p.key/2, node[p.key/2], child[p.key/2]));
        }
        printf("%lld %lld\n", s, e);
    }
    return 0;
}