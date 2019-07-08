#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 1e6 + 5;

struct node
{
    int a[201][201];
    int num = 0;
    set<int> s;
};

node ans;

int b[4] = {0, -1, 0, 1};

bool deal(int n)
{   
    node s;
    s.num = 1;
    queue<node> q;
    fadd(i, 1, 3)
    {
        s.a[s.num / n + 1][s.num % n + 1] = b[i];
        q.push(s);
    }

    bool flag = 0;
    while(!q.empty())
    {
        s = q.front();
        q.pop();

        if(s.num == n * n)
        {
            fadd(j, 1, n)
            {
                int sum = 0;
                fadd(i, 1, n)
                    sum += s.a[i][j];
                s.s.insert(sum);
            }
            if(s.s.size() == 2 * n)
            {
                flag = true;
                ans = s;
            }
        }

        if(flag)
            break;

        fadd(i, 1, 3)
        {
            node tmp = s;
            tmp.a[tmp.num / n + 1][tmp.num % n + 1] = b[i];
            tmp.num++;
            if(tmp.num % n == 0)
            {
                int sum = 0;
                fadd(j, 1, n)
                    sum += tmp.a[tmp.num / n][j];
                tmp.s.insert(sum);
                if(tmp.s.size() == tmp.num / n)
                    q.push(tmp);
            }
            else
                q.push(tmp);
        }
    }
    return flag;
}

int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        if(deal(n))
        {
            cout << "possible" << endl;
            fadd(i, 1, n)
            {
                fadd(j, 1, n)
                    if(j != n)
                        cout << ans.a[i][j];
                    else
                        cout << ans.a[i][j] << " " << endl;
            }
        }
        else
            cout << "impossible" << endl;
    }
    return 0;
}


