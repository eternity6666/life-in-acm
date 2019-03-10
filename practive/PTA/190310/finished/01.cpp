#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    cin >> n;
    string ans = "0";
    fei(1, n)
    {
        int len = ans.length();
        string tmp = "";
        fej(1, len)
        {
            if(ans[j - 1] == '0')
                tmp = tmp + "1";
            else
                tmp = tmp + "01";
        }
        // cout << tmp << endl;
        ans = tmp;
    }
    cout << ans << endl;
    return 0;
}


