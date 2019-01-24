#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

string s, t;

bool get_ans()
{
    if(s == t)
        return 1;
    int sl = s.length();
    int tl = t.length();
    int dl = abs(sl - tl);
    if(dl > 2)
        return 0;
    else if(sl == tl)
    {
        int ans = 0;
        fei(0, sl - 1)
            if(s[i] != t[i])
                ans++;
        if(ans > 2)
            return 0;
        else
            return 1;
    }
    else if(dl == 1)
    {
        int flag = 0;

        for(int i = 0, j = 0; i < sl && j < tl;)
        {
            if(s[i] == t[j])
            {
                i++;
                j++;
            }
            else
            {

            }
        }
        if(flag <= 2)
            return 1;
    }
}

int main()
{
    freopen("in.txt", "r", stdin);

    cin >> s >> t;
    bool ans = get_ans();
    if(ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

