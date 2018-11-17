#include <bits/stdc++.h>
using namespace std;
const int maxn = 1000000 + 5;
string ans;
int T, N;
char z;

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> T;
    while(T--)
    {
        cin >> N >> z;
        getchar();
        char s[maxn];
        ans = "";
        for(int i = 0; i < N; i++)
        {
            scanf("%c", s + i);
            int tmp = abs((int)z - (int)s[i]);
            if(tmp < 10)
            {
                ans = ans + "0";
            }
            stringstream ss;
            string t;
            ss << tmp;
            ss >> t;
            ans = ans + t;
        }
        getchar();
        stringstream ss, sss;
        int tmp;
        ss << ans;
        ss >> tmp;
        sss << tmp;
        sss >> ans;
//        cout << ans << endl;
        cout << ans.size() << endl;
    }
    return 0; 
}
