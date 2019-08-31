/*
#include <iostream>
#include <queue>
using namespace std;

priority_queue<unsigned, vector<unsigned>, less<unsigned>> Q;
unsigned li, ans;

void CLEAR()
{
    while (!Q.empty())
        Q.pop();
    li = ans = 0;
}

void PUSH(unsigned a)
{
    li++;
    Q.push(a);
    unsigned tmp = Q.top();
    ans ^= (li * tmp);
}

void POP()
{
    li++;
    unsigned tmp;
    if (Q.empty())
        tmp = 0;
    else
    {
        Q.pop();
        if (Q.empty())
            tmp = 0;
        else
            tmp = Q.top();
    }
    ans ^= (li * tmp);
}

int n, p, q, m;
unsigned SA, SB, SC;
unsigned rng61()
{
    SA ^= SA << 16;
    SA ^= SA >> 5;
    SA ^= SA << 1;
    unsigned t = SA;
    SA = SB;
    SB = SC;
    SC ^= t ^ SA;
    cout << SA << " " << SB << " " << SC << " " << endl;
    return SC;
}

void gen()
{
    scanf("%d%d%d%d%u%u%u", &n, &p, &q, &m, &SA, &SB, &SC);
    for (int i = 1; i <= n; i++)
    {
        if (rng61() % (p + q) < p)
            PUSH(rng61() % m + 1);
        else
            POP();
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        CLEAR();
        gen();
        cout << "Case #" << i << ": " << ans << endl;
    }
    return 0;
}
*/

/*
#include <iostream>
#include <algorithm>
#include <stack>
#include <cstdio>
using namespace std;

int n, p, q, m;
unsigned SA, SB, SC;
unsigned rng61()
{
    SA ^= SA << 16;
    SA ^= SA >> 5;
    SA ^= SA << 1;
    unsigned t = SA;
    SA = SB;
    SB = SC;
    SC ^= t ^ SA;
    return SC;
}

void PUSH(unsigned x, stack<unsigned> &s)
{
    if(s.empty())
        s.push(x);
    else
        s.push(max(x, s.top()));
}

void POP(stack<unsigned> &s)
{
    if(!s.empty())
        s.pop();
}

int main()
{
    int t; cin >> t;
    for(int i = 1; i <= t; i++)
    {
        scanf("%d%d%d%d%u%u%u", &n, &p, &q, &m, &SA, &SB, &SC);
        long long ans = 0;
        stack<unsigned> s;
        for(int j = 1; j <= n; j++)
        {
            if(rng61() % (p + q) < p)
                PUSH(rng61() % m + 1, s);
            else
                POP(s);
            if(s.empty())
                ans ^= j * 0;
            else
                ans ^= j * s.top();
        }
        printf("Case #%d: %lld\n", i, ans);
    }
    return 0;
}
*/

#include <iostream>
using namespace std;
typedef long long ll;
const int maxn = 5e6 + 10;

int n, p, q, m;
unsigned int SA, SB, SC;
int st[maxn], len;

ll ans;

unsigned int rng61()
{
    SA ^= SA << 16;
    SA ^= SA >> 5;
    SA ^= SA << 1;
    unsigned int t = SA;
    SA = SB;
    SB = SC;
    SC ^= t ^ SA;
    return SC;
}

int pop()
{
    return st[len = max(len - 1, 0)];
}

int push(int x)
{
    st[++len] = x;
    return st[len] = max(st[len], st[len - 1]);
}

ll gen()
{
    ll ans, tmp;
    ans = len = 0;
	scanf("%d%d%d%d%u%u%u", &n, &p, &q, &m, &SA, &SB, &SC);
    for(int i = 1; i <= n; i++)
    {
        if(rng61() % (p+q) <p)
            tmp = push(rng61() % m + 1);
        else
            tmp = pop();
        ans ^= i * tmp;
    }
    return ans;
}

int main()
{
    int t; cin >> t;
    for(int i = 1; i <= t; i++)
        cout << "Case #" << i << ": " << gen() << endl;
}