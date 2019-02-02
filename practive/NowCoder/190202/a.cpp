#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

long long n, m;

struct node
{
    long long score;
    long long t;
    long long ans;
};

long long x[] = {0, 6, 7, 8, 9}; 

int main()
{
    freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    cin >> n >> m;
    bool flag;
    queue<node> q;
    node tmp;
    fei(1, 4)
    {
        tmp.score = x[i];
        tmp.t = 1;
        if(i == 1)
            tmp.ans = 1;
        else
            tmp.ans = 0;
        q.push(tmp);
    }
    long long ans = 0;
    while(!q.empty())
    {
        node tmp = q.front();
        // cout << tmp.score << tmp.t << tmp.ans << endl;
        q.pop();
        if(tmp.t > m)
            break;
        if(tmp.score == n && tmp.t == m)
        {
            if(flag == 0)
            {
                flag = 1;
                ans = tmp.ans;
            }
            if(ans > tmp.ans)
                ans = tmp.ans;
        }
        fei(1, 4)
        {
            node tmp2;
            tmp2.score = tmp.score + x[i];
            tmp2.t = tmp.t + 1;
            if(i == 1)
                tmp2.ans = tmp.ans + 1;
            else
                tmp2.ans = tmp.ans;
            q.push(tmp2);
        }
    }
    if(flag)
        cout << ans << endl;
    else
        cout << "jgzjgzjgz" << endl;
    return 0;
}

