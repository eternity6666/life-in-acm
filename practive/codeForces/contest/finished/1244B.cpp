#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        bool flag = 0;
        int l = -1, r = -1;
        for(int i = 0; i < n; ++i)
            if(flag==0 && s[i] == '1')
                flag = 1, r = l = i;
            else if(s[i] == '1')
                r = i;
        if(l==r&&r==-1)
            cout << n << endl;
        else
            cout << 2 * max(n-l, r+1) << endl;
    }
    return 0;
}
