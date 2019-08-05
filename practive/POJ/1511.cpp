#include <iostream>
using namespace std;
const int maxn = 1e6 + 5;
typedef long long ll;

int head[maxn];
struct node
{
    int to, next;
    ll w;    
};
node edge[maxn];
int n, m;

void floyd()
{
    
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie();
    int t;
    cin >> t;
    while(t--)
    {
        memset(head, 0, sizeof(head));
        cin >> n >> m;
        for(int i = 0; i < m; i++)
        {
            int u, v; ll w;
            cin >> u >> v >> w;
            edge[i].to = v;
            edge[i].w = w;
            edeg[i].next = head[u];
            head[u]  = i;
        }
    }
    return 0;
}
