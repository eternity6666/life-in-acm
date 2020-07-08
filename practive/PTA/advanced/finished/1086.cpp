#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector<int> ve1, ve2, ve3;
stack<int> st;
int n;
void dfs(int l1, int r1, int l2, int r2)
{
    // cout << l1 << " " << r1 << " ";
    // cout << l2 << " " << r2 << " ";
    // cout << ve1[l1] << endl;
    if (l1 > r1 || l2 > r2)
        return;
    if (l1 == r1)
    {
        ve3.push_back(ve1[l1]);
        return;
    }
    int node = ve1[l1];
    int tmp;
    for (int i = l2; i <= r2; i++)
    {
        tmp = i;
        if (ve2[i] == node)
            break;
    }
    int llen = tmp - l2;
    int rlen = r2 - tmp;
    // cout << llen << " " << rlen << endl;
    // return;
    dfs(l1 + 1, l1 + llen, l2, l2 + llen - 1);
   // cout << r1 - rlen + 1 << " " << r1 << " " << r2 - rlen + 1 << " " << r2 << endl;
    dfs(r1 - rlen + 1, r1, r2 - rlen + 1, r2);
    dfs(l1, l1, l2 + llen, l2 + llen);
}

int main()
{
    cin >> n;
    for (int i = 0; i < 2 * n; ++i)
    {
        string s;
        cin >> s;
        if (s == "Push")
        {
            int tmp;
            cin >> tmp;
            ve1.push_back(tmp);
            st.push(tmp);
        }
        else
        {
            ve2.push_back(st.top());
            st.pop();
        }
    }
    dfs(0, n - 1, 0, n - 1);
    for (int i = 0; i < n; ++i)
        cout << ve3[i] << (i + 1 == n ? "\n" : " ");
    return 0;
}
