#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct node
{
    int name;
    long long w;
};
const int maxn = 100 + 5;
int n, m;
long long s;
bool isLeaf[maxn];
long long w[maxn];
int st[maxn];

vector<node> ve[maxn];
bool cmp(node a, node b)
{
    return a.w > b.w;
}

void dfs(int no, int sum, int len)
{
    // cout << no << " " << sum << " " << len << endl;
    if (sum > s)
        return;
    if (isLeaf[no])
    {
        if (sum != s)
            return;
        for (int i = 0; i < len; ++i)
            cout << w[st[i]] << (i + 1 == len ? "\n" : " ");
        return;
    }
    vector<node>::iterator vit;
    for (vit = ve[no].begin(); vit != ve[no].end(); ++vit)
    {
        st[len] = vit->name;
        dfs(vit->name, sum + vit->w, len + 1);
    }
}
int main()
{
    scanf("%d%d%lld", &n, &m, &s);
    for (int i = 0; i < n; ++i)
    {
        scanf("%lld", &w[i]);
        isLeaf[i] = true;
    }
    for (int i = 0; i < m; ++i)
    {
        int id, k;
        scanf("%d%d", &id, &k);
        isLeaf[id] = false;
        while (k--)
        {
            int idk;
            scanf("%d", &idk);
            node tmp;
            tmp.name = idk;
            tmp.w = w[idk];
            ve[id].push_back(tmp);
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (ve[i].size() != 0)
            sort(ve[i].begin(), ve[i].end(), cmp);
    }
    st[0] = 0;

    dfs(0, w[0], 1);
    return 0;
}