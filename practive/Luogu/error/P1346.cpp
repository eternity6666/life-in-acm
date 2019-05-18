#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = (a); (i) <= (b); (i)++)
#define fcut(i, a, b) for(int (i) = (a); (i) >= (b); (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 100 + 5;
struct node
{
    int b;
    int time;
};

int n, a, b;
int g[maxn][maxn];

int deal();

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> n >> a >> b;
    fadd(i, 1, n)
        fadd(j, 1, n)
            g[i][j] = -1;
    fadd(i, 1, n)
    {
        int k;
        cin >> k;
        fadd(j, 1, k)
        {
            int ki;
            cin >> ki;
            g[i][ki] = 1;
            if(j == 1)
                g[i][0] = ki;
        }
    }

    /*)
    fadd(i, 0, n)
    {
        fadd(j, 0, n)
            cout << g[i][j] << " ";
        cout << endl;
    }
    */
    cout << deal() << endl;
    return 0;
}

int deal() 
{
    node tmp;
    tmp.b = a;
    tmp.time = 0;

    queue<node> q;
    q.push(tmp);
    
    int ans = -1;
    while(!q.empty()) 
    {
        tmp = q.front();
        q.pop();

        if(tmp.b == b)
        {
           // cout << ans << endl;
            if(ans = -1)
                ans = tmp.time;
            else
                ans = (ans < tmp.time ? ans : tmp.time);
            continue;
        }

        fadd(i, 1, n)
        {
            if(i == a)
                continue;
            if(i == tmp.b)
                continue;
            else if(g[tmp.b][0] == i)
            {
               // cout << 111 << endl;
                node tmp2;
                tmp2.b = i;
                tmp2.time = tmp.time;
                q.push(tmp2);
            }
            else
            {
                if(g[tmp.b][i] == 1)
                {
                   // cout << 234 << endl;
                    node tmp2;
                    tmp2.b = i;
                    tmp2.time = tmp.time + 1;
                    q.push(tmp2);
                }
            }
        }
    }

    return ans;
}

