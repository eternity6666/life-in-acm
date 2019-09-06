/*
#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 10;

int sum[maxn];
queue<char> qu;
bool isOK()
{
    while(!qu.empty())
    {
        char tmp = qu.front(); qu.pop();
        if(tmp == '(')
            return true;
    }
    return false;
}

int main()
{
    string s; cin >> s;
    int len = s.length();
    for(int i = 0; i < len; i++)
    {
        if(i == 0)
            qu.push(s[i]), sum[i] = sum[i+1] = 0;
        else
        {
            if(qu.size()==0)
                qu.push(s[i]), sum[i+1] = sum[i];
            else if(s[i] == ')' && isOK())
                sum[i+1] = sum[i] + 2;
            else if(s[i] == '(')
                qu.push(s[i]), sum[i+1] = sum[i];
        }
        cout << sum[i+1] << (i == len - 1 ? "\n" : " ");
    }

    int m; cin >> m;
    while(m--)
    {
        int l, r; cin >> l >> r;
        cout << sum[r]-(s[l-1]==')'?sum[l+1]:sum[l]) << endl;
    }
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin >> s;
    int m; cin >> m;
    
    return 0;
}