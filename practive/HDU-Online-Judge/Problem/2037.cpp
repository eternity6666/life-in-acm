#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 100 + 5;
int n;
struct node{
    int s, e, length;
}program[maxn];
bool used[25];
bool cmp(const node a, const node b)
{
    if(a.length != b.length)
        return a.length < b.length;
    else if(a.s != b.s)
        return a.s < b.s;
    else
        return a.e < b.e;
}

int main()
{
    freopen("in.txt", "r", stdin);
    while(~scanf("%d", &n) && n)
    {
        memset(used, 1, sizeof(used));
        fei(1, n)
        {
            cin >> program[i].s >> program[i].e;
            program[i].length = program[i].e - program[i].s;
        }
        sort(program + 1, program + n + 1, cmp);
        int ans = 0;
        fei(1, n)
        {
            bool flag = 1;
            fej(program[i].s + 1, program[i].e - 1)
            {
                if(used[j] == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag)
            {
                //cout << program[i].s << program[i].e << endl;
                ans++;
                fej(program[i].s + 1, program[i].e - 1)
                    used[j] = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

