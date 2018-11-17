#include <bits/stdc++.h>
using namespace std;
int T, N;
char z;
string s;
int main()
{
    freopen("in.txt", "r", stdin);
    cin >> T;
    while(T--)
    {
        cin >> N >> z >> s;
        string ans = "";
        for(int i = 0; i < s.size(); i++)
        {
            int a = z - s[i];
            a = abs(a);
            stringstream ss;
            ss << a;
            if(a < 10)
                ans = ans + "0";
            string tmp;
            ss >> tmp;
            ans = ans + tmp;
        }
        while(1)
        {
            if(ans.size() == 1)
                break;
            if(ans.find('0') == 0)
                ans.erase(ans.begin());
            else
                break;
        }
        /*
        int tmp;
        stringstream ss;
        ss << ans;
        cout << ans << endl;
        ss >> tmp;
        stringstream sss;
        sss << tmp;
        sss >> ans;
        */
//        cout << ans << endl;
        cout << ans.size() << endl;
    }
    return 0;
}
