#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int main()
{
    freopen("in.txt", "r", stdin);
    string s;
    int n;
    cin >> s >> n;
    int slen = s.length();
    while(n--)
    {
        string t;
        cin >> t;
        int len = t.length();
        int x = 0;
        fei(0, len - 1)
        {
            bool flag = true;
            fej(x, slen - 1)
                if(
        }
    }
    return 0;
}


