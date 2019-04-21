#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 2e6+ 5;
typedef long long ll;

int n, q;
int score[maxn];
int mi[maxn], ma[maxn];

inline int ls(int p) {return p << 1;}
inline int rs(int p) {return p << 1 | 1;};
void push_up_min(int p) {
    mi[p] = min(mi[ls(p)], mi[rs(p)]);
    ma[p] = min(ma[ls(p)], ma[rs(p)]);
}

void build(long long p, long long l, long long r)
{
    if(l == r) 
    {
        ans[p] = score[1];
        return;
    }
    long long mid = (l + r) >> 1;
    build(ls(p), l, mid);
    build(rs(p), mid + 1, r);
    push_up(p);
}

inline void f(long long p, long long l, long long r, long long k)
{
    tag[p] = tag[p] + k;
    ans[p] = ans[p] + k * (r - l + 1);
}

inline void push_down(ll p, ll l, ll r)
{
    ll mid = (l + r) >> 1;
    f(ls(p), l, mid, tag[p]);
    f(rs(p), mid + 1, r, tag[p]);
    tag[p] = 0;
}

inline void update(ll nl, ll nr, ll l, ll r, ll p, ll k)
{
    if(nl <= l && r <= nr)
    {
        ans[p] += k * (r - l + 1);
        tag[p] += k;
        return;
    }
    push_down(p, l, r);
    ll mid = (l + r) >> 1;
    if(nl <= mid)
        update(nl, nr, l, mid, ls(p), k);
    if(nr > mid)
        update(nl, nr, mid + 1, r, rs(p), k);
    push_up(p);
}

ll

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> n >> q;
    fei(1, n)
        cin >> score[i];
    while(q--)
    {
        int code;
        cin >> code;
        int l, r;
        cin >> l >> r;
        if(code) {
            score[l] = r;
        }
        else {

        }
    }
    return 0;
}


