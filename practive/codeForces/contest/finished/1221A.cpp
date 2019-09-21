/*
#include <bits/stdc++.h>
using namespace std;
const int maxn = 105;

int s[maxn], n;

bool isAble()
{
    int tmpn = 1;
    int v[maxn];
    for(int i = 1; i <= n;)
    {
        if(i+1<=n)
        else
        {

        }
    }

}

bool find2048()
{
    for(int i = 1; i <= n; ++i)
        if(s[i]==2048)
            return true;
    return false;
}

void answer()
{
    bool flag = false;
    if(find2048())
    {
        cout << "YES" << endl;
        return ;
    }
    while(isAble())
    {
        if(find2048())
        {
            flag = true;
            break;
        }
    }
    cout << (flag?"YES":"NO") << endl;
}

int main()
{
    int q; cin >> q;
    while(q--)
    {
        cin >> n;
        for(int i = 1; i <= n; ++i) cin >> s[i];
        sort(s+1, s+1+n);
        answer();
    }
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
const int maxn = 105;

int n, s[maxn];

bool canMerge()
{
    sort(s + 1, s + 1 + n);
    int tmpn = 0, v[maxn];
    bool flag = false;
    for (int i = 1; i <= n;)
    {
        if (s[i] > 11)
            break;
        if (i + 1 <= n && s[i] == s[i + 1])
        {
            v[++tmpn] = s[i] + 1;
            i+=2;
            flag = true;
        }
        else
            v[++tmpn] = s[i++];
    }
    for (int i = 1; i <= tmpn; ++i)
        s[i] = v[i];
    n = tmpn;
    return flag;
}

bool find11()
{
    for (int i = 1; i <= n; ++i)
        if (s[i] == 11)
            return true;
    return false;
}

void answer()
{
    if (find11())
    {
        cout << "YES" << endl;
        return;
    }
    while (canMerge())
    {
        if (find11())
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int log2()
{
    int tmp;
    cin >> tmp;
    int ans = 0;
    while (tmp != 1)
    {
        tmp /= 2;
        ans++;
    }
    return ans;
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        cin >> n;
        for (int i = 1; i <= n; ++i)
            s[i] = log2();
        answer();
    }
    return 0;
}
