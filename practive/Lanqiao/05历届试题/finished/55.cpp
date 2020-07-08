#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
ll a;
int k = 10, cal = 1;

void getStr();
ll getInt(string s);
void test()
{
    a = 100;
    k = 16;
    int n;
    cin >> n;
    while(n--)
    {
        string s;cin >> s;
        cout << getInt(s)<<endl;
    }
}
int main()
{
    // test();

    int n;
    cin >> n;
    while (n--)
    {
        string op;
        cin >> op;
        if (op == "CLEAR")
            cal = a = 0;
        else if (op == "CHANGE")
            cin >> k;
        else if (op == "EQUAL")
            getStr();
        else if (op == "ADD")
            cal = 2;
        else if (op == "SUB")
            cal = 3;
        else if (op == "MUL")
            cal = 4;
        else if (op == "DIV")
            cal = 5;
        else if (op == "MOD")
            cal = 6;
        else if (op == "NUM")
        {
            string s;
            cin >> s;
            ll b = getInt(s);
            switch (cal)
            {
            case 0:
                a = b;
                break;
            case 2:
                a += b;
                break;
            case 3:
                a -= b;
                break;
            case 4:
                a *= b;
                break;
            case 5:
                a /= b;
                break;
            case 6:
                a %= b;
                break;
            }
        }
    }
    return 0;
}

void getStr()
{
    vector<char> v;
    ll b = a;
    while (b)
    {
        ll tmp = b % k;
        if (tmp < 10)
            v.push_back('0' + tmp);
        else
            v.push_back('A' + (tmp - 10));
        b = b / k;
    }
    if (v.size() == 0)
    {
        cout << "0" << endl;
        return;
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i];
    }
    cout << endl;
}

ll getInt(string s)
{
    ll ans = 0;
    int len = s.length();
    ll tmp = 1;
    for (int i = len - 1; i >= 0; i--)
    {
        char c = s[i];
        ll tmp1;
        if ('0' <= c && c <= '9')
            tmp1 = c - '0';
        else if ('A' <= c && c <= 'Z')
            tmp1 = c - 'A'+10;
        ans += tmp1 * tmp;
        tmp *= k;
    }
    return ans;
}
