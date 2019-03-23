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
    char c;
    cin >> n >> c;
    string s;
    getchar();
    getline(cin, s);
    cout << s << endl;
    int len = s.length();
    if(len > n)
    {
        for(int i = len - n; i < len; i++)
            cout << s[i];
    }
    else
    {
        for(int i = 0; i < n - len; i++)
            cout << c;
        cout << s << endl;
    }
    return 0;
}


