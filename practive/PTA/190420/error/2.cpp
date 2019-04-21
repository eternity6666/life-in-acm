#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int getNum(string s);
bool isNum(string s);
bool hasSpace(string s);

int main()
{
    // freopen("in.txt", "r", stdin);
    string a;
    getline(cin, a);
    // cout << a << endl;
    int x = -1;
    string b = "";
    int len = a.length();
    fei(0, len - 1)
        if(a[i] == ' ')
        {
            x = i;
            break;
        }
        else
            b += a[i];
    string c = "";
    fei(x + 1, len - 1)
        c += a[i];
    if(hasSpace(c))
        cout << "? + ? = ?" << endl;
    else 
    {
        if(isNum(b))
            if(isNum(c))
            {
                int numb = getNum(b);
                int numc = getNum(c);
                cout << numb << " + " << numc << " = " << numb + numc << endl;
            }
            else
                cout << b << " + ? = ?" << endl;
        else
            if(isNum(c))
                cout << "? + " << c << " = ?" << endl;
    }
    return 0;
}

bool isNum(string s)
{
    int len = s.length();
    fei(0, len - 1)
        if(i == 0 && (s[i] == '+' || s[i] == '-'))
            continue;
        else if(s[i] > '9' || s[i] < '0')
            return false;
    return true;
}

int getNum(string s)
{
    int x = 0;
    int len = s.length();
    if('0' <= s[0] && s[0] <= '9')
        fei(0, len - 1)
            x = x * 10 + (s[i] - '0');
    else 
    {
        fei(1, len - 1)
            x = x * 10 + (s[i] - '0');
        if(s[0] == '-')
            x = -x;
    }
    return x;
}

bool hasSpace(string s)
{
    int len = s.length();
    fei(0, len - 1)
        if(s[i] == ' ')
            return true;
    return false;
}

