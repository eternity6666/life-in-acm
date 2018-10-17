#include <cstdio>
#include <set>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <cstring>
#define fei(a, b) for(int i = a; i <= b; i++)

#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;
const int maxn = 100 + 5;

int N, C, a;
string s1, s2, s3;
bool flag = 0;

string got_s(string a, string b);

void input();
void dfs(string s);

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        cout << i << ' ';
        input();
        set<string> s;

        string tmp;

        while(1)
        {
            tmp = got_s(s1, s2);
            a++;

            if(tmp == s3)
            {
                flag = 1;
                break;
            }

            if(s.find(tmp) != s.end())
            {
                flag = 0;
                break;
            }

            s.insert(tmp);
            s1 = s2 = "";
            for(int j = 0; j < tmp.length(); j++)
            {
                if(j < tmp.length() / 2)
                    s1 = s1 + tmp[j];
                else
                    s2 = s2 + tmp[j];
            }
        }
        if(flag)
            cout << a << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}

string got_s(string a, string b)
{
    string ans = "";
    for(int i = 0; i < a.length(); i++)
    {
        ans = ans + b[i] + a[i];
    }
    return ans;
}

void input()
{
    cin >> C;
    flag = 0;
    a = 0;
    cin >> s1 >> s2 >> s3;
}

