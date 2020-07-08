#include <iostream>
using namespace std;
const int maxn = 100 + 5;
int n, m;
int tree[maxn];
int nodes[maxn];
int child[maxn];

int get(int kk)
{
    int ans = 0;
    while (kk != tree[kk])
    {
        ans++;
        // printf("kk=%d tree[kk]=%d", kk, tree[kk]);
        kk = tree[kk];
        // printf(" kk=%d tree[kk]=%d\n", kk, tree[kk]);
    }
    return ans;
}

int main()
{
    while (cin >> n)
    {
        if (n == 0)
            break;
        cin >> m;
        for (int i = 0; i <= n; ++i)
            nodes[i] = 0, tree[i] = i, child[i] = 0;
        for (int i = 0; i < m; ++i)
        {
            int id, k;
            cin >> id >> k;
            nodes[id] += k;
            while (k--)
            {
                int tmp;
                cin >> tmp;
                tree[tmp] = id;
            }
        }
        int len = 0;
        for (int i = n; i >= 1; i--)
        {
            int tmp = get(i);
            // cout << tmp << " " ;
            len = (tmp > len ? tmp : len);
            if (nodes[i] == 0)
            {

                child[tmp]++;
                // cout << i << " " << tmp << " " << child[tmp]<<endl;
            }
        }
        // cout <<endl;
        // for(int i = 1; i<=n;++i)
        //     cout << nodes[i] << (i == n ?"\n":" ");
        for (int i = 0; i <= len; ++i)
            cout << child[i] << (i == len ? "\n" : " ");
    }
    return 0;
}