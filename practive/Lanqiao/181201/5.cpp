#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int n;

bool cmp (string a, string b)
{
    int tmp = a.find('*');
    while(1)
    {
        int x = a.find('.');
        int y = b.find('.');
        if(x == tmp && y == tmp)
        {
            int m = a.length();
            int n = b.length();
            if(m < n)
                return true;
            else if(m > n)
                return false;
            else
            {
                fei(0, m - 1)
                    if(a[i] != b[i])
                        return a[i] < b[i];
            }
        }
        else if(x == tmp && y != tmp)
            return true;
        else if(x != tmp && y == tmp)
            return false;
        else
        {
            if(x != y)
                return x < y;
            fei(0, x)
                if(a[i] != b[i])
                    return a[i] < b[i];
            string::iterator it1 = a.begin();
            a.erase(it1, it1 + x);
            string::iterator it2 = b.begin();
            b.erase(it2, it2 + y);
            if(a == "")
                return true;
            if(b == "")
                return false;
        }
    }
}

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> n;
    string s[maxn];
    fei(0, n - 1)
        cin >> s[i];

    sort(s, s + n, cmp);

    fei(0, n - 1)
        cout << s[i] << endl;
    /*
    set<string, cmp> s;
    while(n--)
    {
        string tmp;
        cin >> tmp;
        s.insert(tmp);
    }
    */

    /*
    set<string, cmp>::iterator it;

    for(it = s.begin(); it != s.end(); it++)
        cout << *(it) << endl;
    */
    return 0;
}

