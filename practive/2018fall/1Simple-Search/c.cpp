#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;
const int maxn = 100 + 5;

class bigInt{
protected:
    const static int MOD = 10000;
    const static int DLEN = 4;
    int a[600], len;

public:
    bigInt()
    {
        memset(a, 0, sizeof(a));
        len = 1;
    }

    bigInt(int v)
    {
        memset(a, 0, sizeof(a));
        len = 0;
        do
        {
            a[len++] = v % MOD;
            v /= MOD;
        }while(v);
    }

    bigInt(const string s)
    {
        memset(a, 0, sizeof(a));
        int l = s.length();
        len = l / DLEN;
        if(l % DLEN) len++;

        int idx = 0;
        for(int i = L - 1; i >= 0; i-= DLEN)
        {
            int t = 0;
            int k = i - DLEN + 1;
            if(k < 0) k = 0;
            for(int j = k; j <= i; j++)
            {
                t = t * 10 + s[j] - '0';
            }
            a[idx++] = t;
        }
    }

    bigInt operator % (const bigInt &a) const
    {

    }

    void output()
    {
        cout << a[len - 1];
        for(int i = len - 2;i >= 0; i--)
        {
            printf("%04d", a[i]);
        }
        cout << endl;
    }
};
int n;

bool judge(string x);
void bfs();

int main()
{
    freopen("in.txt", "r", stdin);
    while(~scanf("%d", &n) && n)
    {
        bfs();
    }
    return 0;
}

void bfs()
{
    queue<string> q;
    string s = "";
    q.push(s);
    while(!q.empty())
    {
        s = q.top();
        q.pop();
        if(judge(s))
        {
            cout << s << endl;
            return ;
        }
        if(s != "")
            q.push(s + '0');
        q.push(s + '1');
    }
}
bool judge(string x)
{
    bigInt b;
    if(b(x) % n)
        return true;
    else
        return false;
}
