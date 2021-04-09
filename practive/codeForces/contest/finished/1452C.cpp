#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        stack<char> a, b;
        string st;
        cin >> st;
        int ans = 0;
        int len = st.length();
        for(int i = 0; i < len; ++i)
        {
            if(st[i] == '(') a.push(st[i]);
            else if(st[i] == '[') b.push(st[i]);
            else if(st[i] == ')')
            {
                if(!a.empty())
                {
                    a.pop();
                    ans++;
                }
            }
            else
            {
                if(!b.empty())
                {
                    b.pop();
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}

