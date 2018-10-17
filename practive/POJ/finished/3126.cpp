#include <iostream>
#include <cstring>
#include <queue>
#include <cstdio>
// #include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;
const int maxn = 10000 + 5;

struct node{
    int x, p;
};

int a, b;
bool prime[maxn];
bool v[maxn];

void init();
void got_prime();
int bfs();
int new_num(int x, int y, int z);
bool judge(int x, int y);

int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    cin >> t;
    got_prime();
    while(t--)
    {
        cin >> a >> b;

        init();

        int ans = bfs();

        cout << ans << endl;
    }
    return 0;
}

int bfs()
{
    queue<node> q;
    q.back();

    node f;
    f.x = a;
    f.p = 0;
    q.push(f);
    v[f.x] = 0;

    while(!q.empty())
    {
        f = q.front();
        // cout << f.x << " " << f.p << endl;
        q.pop();

        if(f.x == b)
            return f.p;
        // cout << 1 << endl;
        node s;
        for(int i = 1; i <= 1000; i = i * 10)
        {
            fej(0, 9)
            {
                if(i == 1000 && j == 0)
                    continue;
                int num = new_num(f.x, j, i);
                if(prime[num] && v[num])
                {
                    v[num] = 0;
                    s.x = num;
                    s.p = f.p + 1;
                    q.push(s);
                    // cout << s.x << " " << s.p << endl;;
                }
            }
        }
    }
}

int new_num(int x, int y, int z)
{
    int xtmp = x / z % 10;
    return x + (y - xtmp) * z;
}

void got_prime()
{
    memset(prime, 1, maxn);
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= 10000; i++)
    {
        if(prime[i])
        {
            for(int j = 2; i * j <= 10000; j++)
            {
                prime[i * j] = 0;
            }
        }
    }
}

void init()
{
    memset(v, 1, maxn);
}

bool judge(int x, int y)
{
    if(x / 1000 == y / 1000)
        return true;
    if(x / 100 % 10 == y / 100 % 10)
        return true;
    if(x / 10 % 10 == y / 10 % 10)
        return true;
    if(x % 10 == y % 10)
        return true;
    return false;
}

/*
#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;
const int maxn = 10000 + 5;

struct node{
    int x, p;
};

int a, b;
bool prime[maxn];
bool v[maxn];

void init();
void got_prime();
int bfs();
int got_new_num(int x, int y, int z);

int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    cin >> t;
    got_prime();
    while(t--)
    {
        cin >> a >> b;
        
        // init();
        int ans = bfs();
        cout << ans << endl;
    }
    return 0;
}

int got_new_num(int x, int y, int z)
{
    int xtmp = x / z % 10;
    return x + (y - xtmp) * z;
}

int bfs()
{
    queue<node> q;
    q.back();

    node f;
    f.x = a;
    f.p = 0;
    
    while(!q.empty())
    {
        f = q.front();
        q.pop();

        if(f.x == b)
            return f.p;

        node s;
        for(int i = 10; i <= 1000; i = i * 10)
        {
            if(i == 1000)
            {
                fej(1, 9)
                {
                    int new_num = got_new_num(f.x, j, i);
                    if(prime[new_num] && v[new_num])
                    {
                        v[new_num] = 0;
                        s.x = new_num;
                        s.p = f.p + 1;
                        q.push(s);
                    }
                }
            }
            else
            {
                fej(0, 9)
                {
                    int new_num = got_new_num(f.x, j, i);
                    if(prime[new_num] && v[new_num])
                    {
                        v[new_num] = 0;
                        s.x = new_num;
                        s.p = f.p + 1;
                        q.push(s);
                    }
                }
            }
        }
    }
}

void got_prime()
{
    memset(prime, 1, maxn);
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= 10000; i++)
    {
        if(prime[i])
        {
            for(int j = 2; i * j <= 10000; j++)
            {
                prime[i * j] = 0;
            }
        }
    }
}

void init()
{
    memset(v, 1, maxn);
    return ;
}

 */
