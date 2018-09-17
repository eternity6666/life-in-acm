#include <bits/stdc++.h>
using namespace std;
const int maxn = 1000 + 5;

struct node{
    int a, b;
    double w;
}bones[maxn];

bool cmp(node &a, node &b);

int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--)
    {
        int n, v;
        cin >> n >> v;
        for(int i = 0; i < n; i++)
        {
            cin >> bones[i].a;
        }
        for(int i = 0; i < n; i++)
        {
            cin >> bones[i].b;
            bones[i].w = (1.0) * bones[i].a /  bones[i].b;
        }

        sort(bones, bones + n, cmp);

        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(v <= 0)
                break;
            if(v >= bones[i].b)
            {
                v = v - bones[i].b;
                ans += bones[i].a;
                // cout << bones[i].a << endl;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

bool cmp(node &a, node &b)
{
    return a.w > b.w;
}
