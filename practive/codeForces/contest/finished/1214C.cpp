/*
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n & 1)
        cout << "No" << endl;
    else
    {
        stack<char> st;
        for (int i = 0; i < n; ++i)
        {
            if (st.size() == 0)
                st.push(s[i]);
            else if (s[i] == ')' && st.top() == '(')
                st.pop();
            else
                st.push(s[i]);
            // if (st.size() > 0)
            //     cout << st.size() << " " << st.top() << endl;
            // else
            //     cout << st.size() << endl;
        }
        if (st.size() == 0)
            cout << "Yes" << endl;
        else
        {
            char a = st.top();
            st.pop();
            char b = st.top();
            st.pop();
            if (a != b)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for(int i = 0; i < n; ++i)
    {
        if(s[i] == '(') ans++;
        else ans--;
        if(ans <= -2)
        {
            cout << "No\n";
            return 0;
        }
    }
    if(ans)
        cout << "No\n";
    else
        cout << "Yes\n";
    return 0;
}