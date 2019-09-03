/*
#include <iostream>
#include <queue>
using namespace std;

struct node
{
    string s;
    int a, b, c, n;
};

string s, t;

bool judge(char a, char b)
{
    string tmp = "";
    tmp += a; tmp += b;
    return tmp != s && tmp != t;
}

int main()
{
    int n;
    cin >> n >> s >> t;
    node tmp;
    tmp.s = "";
    tmp.a = tmp.b = tmp.c = tmp.n = 0;
    queue<node> q;
    q.push(tmp);
    string ans = "";
    while (!q.empty())
    {
        tmp = q.front();
        q.pop();
        // cout << tmp.s << endl;
        if (tmp.n == 3 * n)
        {
            ans = tmp.s;
            break;
        }
        if (tmp.a < n)
        {
            node tmp2 = tmp;
            tmp2.s += 'a';
            tmp2.a++;
            tmp2.n++;
            if(tmp2.n < 2 || judge(tmp.s[tmp.n-1], 'a'))
                q.push(tmp2);
        }
        if (tmp.b < n)
        {
            node tmp2 = tmp;
            tmp2.s += 'b';
            tmp2.b++;
            tmp2.n++;
            if(tmp2.n < 2 || judge(tmp.s[tmp.n-1], 'b'))
                q.push(tmp2);
        }
        if (tmp.c < n)
        {
            node tmp2 = tmp;
            tmp2.s += 'c';
            tmp2.c++;
            tmp2.n++;
            if(tmp2.n < 2 || judge(tmp.s[tmp.n-1], 'c'))
                q.push(tmp2);
        }
    }
    if (ans == "")
        cout << "NO" << endl;
    else
        cout << "YES" << endl
             << ans << endl;
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s, t;
    cin >> n >> s >> t;
    string abc = "abc";
    vector<string> res;
    do
    {
        string cur;
        for (int i = 0; i < n; ++i)
            cur += abc;
        res.push_back(cur);
        res.push_back(string(n, abc[0]) + string(n, abc[1]) + string(n, abc[2]));
    } while (next_permutation(abc.begin(), abc.end()));
    for(auto str : res)
    {
        if(str.find(s) == string::npos && str.find(t) == string::npos)
        {
            cout << "YES" << endl << str << endl;
            return 0;
        }
    }

    assert(false);
    cout << "NO" << endl;
    return 0;
}
