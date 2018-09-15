#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
long long n, ans = 0;

void dfs(string s);

int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--)
    {
        ans = 0;
        cin >> n;
        dfs("");
        cout << ans << endl;
    }
    return 0;
}

void dfs(string s)
{
    long long len = s.size();
    if(len >= 3)
    {
        if(s[len - 1] == s[len - 2] && s[len - 1] == s[len - 3] && s[len - 2] && s[len - 3])
            return ;
        if(s[len - 1] == 'c' && s[len - 3] == 'c')
            return ;
        if(s[len - 2] == 'c' && ((s[len - 3] == 'f' && s[len - 1] == 'm') || (s[len - 1] == 'f' && s[len - 3] == 'm')))
            return ;
    }
    if(len == n)
    {
        //cout << s << endl;
        ans++;
        return ;
    }
    dfs(s + 'm');
    dfs(s + 'c');
    dfs(s + 'f');
}

/*
vector<char> s;

void dfs(char c, int i);

int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--)
    {
        //a.clear();
        scanf("%lld", &n);
        s.clear();
       // s.push_back(' ');
       // s.push_back(' ');
        ans = 0;
        dfs('m', 1);
        s.erase(s.end() - 1);
        dfs('c', 1);
        s.erase(s.end() - 1);
        dfs('f', 1);
        s.erase(s.end() - 1);
        
        cout << ans % mod << endl;
    }
    return 0;
}

void dfs(char c, int i)
{
    s.push_back(c);
    if(i >= 3)
    {
        cout << s[i - 1] << s[i - 2] << s[i - 3] << endl;
//        cout << endl;
        if(s[i - 1] == s[i - 2] && s[i - 1] == s[i - 3] && s[i - 2] == s[i - 3])
            return ;
        if(s[i - 1] == 'c' && s[i - 3] == 'c')
            return ;
        if(s[i - 2] == 'c' && (s[i - 1] == 'f' || s[i - 1] == 'm') && (s[i - 3] == 'm' || s[i - 3] == 'f'))
            return ;
    }
    if(i == n)
    {
        ans++;
        return;
    }
    dfs('m', i + 1);
    s.erase(s.end() - 1);
    dfs('c', i + 1);
    s.erase(s.end() - 1);
    dfs('f', i + 1);
    s.erase(s.end() - 1);
}

void dfs(char c)
{
    s = s + c;
    long long len = s.size();
    if(s[len - 1] == s[len - 2] && s[len - 1] == s[len - 3] && s[len - 2] && s[len - 3])
        return ;
    if(s[len - 1] == 'c' && s[len - 3] == 'c')
        return ;
    if(s[len - 2] == 'c' && (s[len - 1] == 'f' || s[len - 1] == 'm') && (s[len - 3] == 'm' || s[len - 3] == 'f'))
        return ;
    if(len == n)
    {
        ans++;
        return ;
    }
    dfs('m');
    dfs('c');
    dfs('f');
}
*/
