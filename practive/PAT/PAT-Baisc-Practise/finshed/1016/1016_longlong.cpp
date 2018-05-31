#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

ull mySum(string a, char aa);

// #define usefre
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    string a, b;
    char aa, bb;
    cin>>a>>aa>>b>>bb;
    cout << mySum(a, aa) + mySum(b, bb) << endl;
    return 0;
}
ull mySum(string a, char aa)
{
    ull atmp=0;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]==aa)
        {
            atmp=atmp*10+a[i]-'0';
        }
    }
    return atmp;
}