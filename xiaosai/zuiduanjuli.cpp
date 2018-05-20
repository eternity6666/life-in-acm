#include <bits/stdc++.h>
using namespace std;
// #define usefre

void deal(string s, char c, int n);
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    // cout<<"hello"<<endl;
#endif
    string s;
    char c;
    /*
    int n;
    cin >> n;
    */
    // int cnt = 0;
    // while (cnt < n)
    // {
    //     cnt++;
        cin >> s;
        cin >> c;
        // cout<<s<<endl<<c<<endl;
        // if (cnt != 1)
        //     cout << endl;
        deal(s, c, s.length());
    // }
    return 0;
}

void deal(string s, char c, int n)
{
    for (int i = 0; i < n; i++)
    {
        if(i!=0)
        cout<<" ";
        if (s[i] != c)
        {
            int j = 0;
            int min = n;
            for (; j < s.length(); j++)
            {
                if (s[j] == c)
                    if (min > abs(j - i))
                        min = abs(j - i);
            }
            cout << min << " ";
        }
        else
            cout << 0 << " ";
            // cout<<endl;
    }
}
