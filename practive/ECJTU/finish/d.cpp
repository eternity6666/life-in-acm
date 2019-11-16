#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int len = s.length();
        int sum = 0;
        for(int i = 0; i < len; ++i)
            if(s[i]=='0' || s[i]=='4' || s[i]=='6' || s[i]=='9')
                sum+=1;
            else if(s[i]=='8')
                sum += 2;
        cout << sum << endl;
    }
    return 0;
}