/*
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        string a[30];
        for(int i = 1; i <= 26; i++)
        {
            a[i] = s;
            a[i][0] = (a[i][0] - 'a' + i - 1)%26 + 'a';
            // cout << a[i] << (i == 26?"\n": " ");
        }
        int al = 1, ar = 25;
        int bl = 2, br = 26;
        int ak, bk;
        while(true)
        {
            ak = al, bk = bl;
            for(int i = al + 2; i <= ar; i+=2)
                if(a[i] < a[ak])
                    ak = i;
            for(int i = bl + 2; i <= br; i+=2)
                if(a[i] > a[bk])
                    bk = i;
            if(ak < bk) br = ar = ak;
            else ar = br = bk;
            if(ak + 1 == bk || bk + 1 == ak) break;
        }
        cout << ak << "," << bk << endl;
        if(ak < bk)
            cout << a[bk] << endl;
        else
            cout << a[ak] << endl;    
    }
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
    int t; cin >> t;
    while(t--)
    {
        if(t == 6) break;
        string s; cin >> s;
        string a[30], b[30];
        for(int i = 1; i <= 13; i++)
        {
            a[i] = s;
            a[i][0] = (a[i][0] - 'a' + 2 * i - 2)%26 + 'a';
            cout << a[i] << (i == 13?"\n": "   ");
        }
        for(int i = 1; i <= 13; i++)
        {
            b[i] = s;
            b[i][0] = (b[i][0] - 'a' + 2 * i - 1) % 26 + 'a';
            cout << "   " << b[i];
        }
        cout <<endl;

        int al = 1, ar = 13;
        int bl = 1, br = 13;
        int ak, bk;
        while(true)
        {
            ak = al, bk = bl;
            for(int i = al; i <= ar; i++)
                if(a[i] < a[ak])
                    ak = i;
            for(int i = bl; i <= br; i++)
                if(b[i] > b[bk])
                    bk = i;
            if(ak == bk || bk + 1 == ak)
                break;
            else if(ak < bk)
                ar = ak, br = ak - 1;
            else
                br = bk, ar = bk - 1;
        }
        cout << ak << ", " << bk << endl;
        if(ak == bk) cout << a[ak] << endl;
        else cout << a[ak] << endl;
    }
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

string s;
int len;

int judge()
{
    for(int i = len; i >= 0; ++i)
        if(s[i] == 'z')
            return i;
    return -1;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> s;
        len = s.length() - 1;

        cout << s << endl;
    }
}
*/

/*
#include <iostream>
using namespace std;

string s;
int len;
bool judge(bool k)
{
    for(int i = 0; i < len; i++)
    {
        string tmp = s;
        tmp[i] = (tmp[i] - 'a' + 1)%26+'a';
        if(k == (tmp < s))
        {
            s = tmp;
            return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> s;
        len = s.length();
        bool k = 1;
        while(judge(k))
        {
            cout << k << s << " ";
            k = !k;
        }
        cout << endl;
        cout << s << endl;
    }
}
*/

#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int len = s.length(), i;
        for(i = 0; i < len; ++i)
            if(s[i] != 'y')
                break;
        if(s[i] == 'z') s[i] = 'b';
        cout << s << endl;
    }
}