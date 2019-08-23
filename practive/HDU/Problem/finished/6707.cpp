#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

bool v[100010];
int a[100010];
stack<int> st;

int main()
{
    memset(v, 0, sizeof(v));
    int n,m; cin >> n >> m;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = n; i >= 1; i--)
        st.push(a[i]);
    while(m--)
    {
        int tmp; cin >> tmp;
        st.push(tmp);
    }
    int x = 0;
    while(x<n)
    {
        int tmp = st.top();
        st.pop();
        if(v[tmp])
            continue;
        v[tmp]=1;
        x++;
        cout << tmp << " ";
    }
    return 0;
}