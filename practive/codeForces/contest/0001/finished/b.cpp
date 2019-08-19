/*
#include <iostream>
using namespace std;

int len;
int r, c;
bool judge(string s)
{
    r = -1, c = -1;
    for(int i = 0; i < len; i++)
        if(s[i] == 'R') r = i;
        else if(s[i] == 'C') c = i;
    return r != -1 && c != -1 && r + 1 < c;
}

int main()
{
    int n; cin >> n;
    while(n--)
    {
        string s; cin >> s;
        len = s.length();
        if(judge(s))
        {
            string rr = "";
            int cctmp = 0;
            bool flag = 1;
            for(int i = 1; i < len; i++)
                if(s[i] == 'R') flag = 1;
                else if(s[i] == 'C') flag = 0;
                else if(flag) rr += s[i];
                else cctmp = cctmp * 10 + s[i] - '0';
            string tmp = "";
            while(cctmp)
            {
                tmp += 'A' + cctmp % 26-1;
                cctmp/=26;
            }
            len = tmp.length();
            string cc = "";
            for(int i = len - 1; i >= 0; i--)
                cc += tmp[i];
            cout << cc << rr << endl;
        }
        else
        {
            int cc = 0;
            string rr = "";
            for(int i = 0; i < len; i++)
                if('A' <= s[i] && s[i] <= 'Z')
                    cc = cc * 26 + s[i] - 'A' + 1;
                else
                    rr = rr + s[i];
            cout << "R" << rr << "C" << cc << endl;
        }
    }
    return 0;
}
*/

#include <iostream>
using namespace std;

string s;
int len;
int judge()
{
    if(s[0] != 'R') return 0;
    if(s[1] <= 'Z' && s[1] >= 'A') return 0;
    for(int i = len - 1; i > 1; i--)
        if(s[i] == 'C') return i;
    return 0;
}

string get(int c)
{
    string cc = "";
    while(c)
    {
        int tmp = (c%26==0?25:c%26-1);
        if(c%26==0) c -= 26;
        c/=26;
        cc = (char)(tmp +'A') + cc;
    }
    return cc;
}

int main()
{
    int n; cin >> n;
    while(n--)
    {
        cin >> s;
        len = s.length();
        int c = judge();
        if(c == 0)
        {
            string rr = "";
            int i;
            for(i = len - 1; i >= 0; --i)
                if(s[i] <= '9' && s[i] >= '0') rr = s[i] + rr;
                else break;
            int cc = 0;
            for(int j = 0; j <= i; j++)
                cc = cc * 26 + (s[j] - 'A') + 1;
            cout << 'R' << rr << 'C' << cc << endl;
        }
        else
        {
            string rr = "";
            for(int i = 1; i < c; i++)
                rr += s[i];
            int cc = 0;
            for(int i = c + 1; i < len; i++)
                cc = cc * 10 + s[i] - '0';
            cout << get(cc) << rr << endl;
        }
    }
}