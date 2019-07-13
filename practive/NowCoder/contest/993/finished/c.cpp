#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 2e7 + 5;

int arr[25];
int d[2] = {0, 1};
int n, b;

struct node
{
    int all;
    int now;
};

int bfs()
{
    int ans = maxn;

    node s;
    s.all = s.now = 0;
    queue<node> q;
    q.push(s);
    while(!q.empty())
    {
        s = q.front();
        q.pop();
        
        if(s.all >= b)
        {
            ans = min(ans, s.all - b);
        }
        else
        {
            if(s.now < n)
                fadd(i, 0, 1)
                {
                    node tmp;
                    tmp.now = s.now + 1;
                    tmp.all = s.all + arr[tmp.now] * d[i];
                    q.push(tmp);
                }
        }
    }
    return ans;
}

int main()
{
    freopen("in.txt", "r", stdin);
    while(~scanf("%d %d", &n, &b))
    {
        fadd(i, 1, n)
            scanf("%d", &arr[i]);
        
        cout << bfs() << endl;
    }
    return 0;
}


