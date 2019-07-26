#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 1e6 + 5;

char vow[5] = {'a', 'e', 'i', 'o', 'u'};

int isVow(char c)
{
    fadd(i, 0, 4)
        if(c == vow[i])
            return 1;
    return 0;
}

int main()
{
    freopen("in.txt", "r", stdin);
    string s;
    int tmp[25];
    while(cin >> s && s != "end")
    {
        int len = s.length() - 1;
        memset(tmp, 0, len + 1);
        bool flag = true;
        bool notVowel = true;
        fadd(i, 0, len)
        {
            tmp[i] = isVow(s[i]);
            if(tmp[i])
                notVowel = false;
            if(i > 0)
                if(s[i] == s[i - 1])
                    if(s[i] != 'e' && s[i] != 'o')
                        flag = false;
            if(i > 1)
            {
                int sum3 = tmp[i] + tmp[i - 1] + tmp[i - 2];
                if(sum3 == 3 || sum3 == 0)
                    flag = false;
            }
            if(!flag)
                break;
        }
        if(notVowel)
            flag = false;
        cout << "<" << s << "> is ";
        if(flag)
            cout << "acceptable." << endl;
        else
            cout << "not acceptable." << endl;
    }
    return 0;
}


