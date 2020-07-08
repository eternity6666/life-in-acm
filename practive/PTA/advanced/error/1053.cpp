#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <stack>
using namespace std;
const int maxn = 100 + 5;
int n, m;
long long w[maxn], s;
int tree[maxn];
long long sum[maxn];
bool isLeaf[maxn];
stack<long long> st;

string get()
{
    string ans = "";
    bool flag = 1;
    while (!st.empty())
    {
        long long tmp = st.top();
        st.pop();
        if (flag)
        {
            ans = to_string(tmp);
            flag = false;
        }
        else
            ans += " " + to_string(tmp);
    }
    return ans;
}

bool cmp(string &a, string &b)
{
    return a > b;
}
int getsum(int i)
{
    if (sum[i] != -1)
        return sum[i];
    return sum[i] = sum[tree[i]] + w[i];
}
int main()
{
    scanf("%d%d%lld", &n, &m, &s);
    for (int i = 0; i < n; ++i)
    {
        isLeaf[i] = 1;
        sum[i] = -1;
        scanf("%lld", &w[i]);
    }
    tree[0] = 0;
    sum[0] = w[0];
    for (int i = 0; i < m; ++i)
    {
        int id, k;
        scanf("%d%d", &id, &k);
        isLeaf[id] = 0;
        while (k--)
        {
            int idk;
            scanf("%d", &idk);
            tree[idk] = id;
        }
    }
    vector<string> ve;
    for (int i = 0; i < n; ++i)
    {
        sum[i] = getsum(i);
        if (isLeaf[i] && sum[i] == s)
        {
            int id = i;
            st.push(w[id]);
            while (id != 0)
            {
                id = tree[id];
                st.push(w[id]);
            }
            ve.push_back(get());
        }
    }

    // cout << endl;
    sort(ve.begin(), ve.end(), cmp);
    vector<string>::iterator vit;
    for (vit = ve.begin(); vit != ve.end(); ++vit)
        cout << *vit << endl;
    return 0;
}
