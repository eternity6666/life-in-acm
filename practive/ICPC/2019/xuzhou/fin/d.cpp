#include <bits/stdc++.h>
using namespace std;

bool kmp(string b, string a, int m, int n)
{
    vector<int> next(n + 1, 0);
    for (int i = 1; i < n; ++i)
    {
        int j = i;
        while(j>0)
        {
            j = next[j];
            if(a[j] == a[i])
            {
                next[i+1]=j+1;
                break;
            }
        }
    }
    for (int i = 0, j = 0; i < m; ++i)
    {
        if (j < n && b[i] == a[j])
            j++;
        else
        {
            while (j > 0)
            {
                j = next[j];
                if (b[i] == a[j])
                {
                    j++;
                    break;
                }
            }
        }
        if (j == n)
            return true;
    }
    return false;
}

int main()
{
    string t;
    cin >> t;
    int tlen = t.length();
    int q;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        string s;
        cin >> s;
        int slen = s.length();
        if (tlen > slen)
        {
            if (kmp(t, s, tlen, slen))
                cout << "my child!" << endl;
            else
                cout << "oh, child!" << endl;
        }
        else if (tlen < slen)
        {
            if (kmp(s, t, slen, tlen))
                cout << "my teacher!" << endl;
            else
                cout << "senior!" << endl;
        }
        else
        {
            if (s == t)
                cout << "jntm!" << endl;
            else
                cout << "friend!" << endl;
        }
    }
    return 0;
}
