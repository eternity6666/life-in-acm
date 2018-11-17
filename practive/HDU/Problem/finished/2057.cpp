#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;
// const int maxn = 100 + 5;

char gotc(long long n);
string gots(long long n);
long long gotx(string a);
long long gotInt(char c);

int main()
{
    freopen("in.txt",  "r", stdin);
    string a, b;
    while(cin >> a >> b)
    {
        long long anstmp = gotx(a) + gotx(b);
        // cout << anstmp << endl;
        string ans = gots(anstmp);
        if(anstmp < 0)
            reverse(ans.begin() + 1, ans.end());
        else
            reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}

char gotc(long long n)
{
    if(n > 9)
        return 'A' + (n - 10);
    else
        return '0' + n;
}

string gots(long long n)
{
    string ans;
    if(n < 0)
    {
        n = -n;
        ans = "-";
    }
    else if(n > 0)
        ans = "";
    else
        ans = "0";
    while(n > 0)
    {
        ans += gotc(n % 16);
        n /= 16;
    }
    return ans;
}

long long gotInt(char c)
{
    if(c >= '0' && c <= '9')
        return c - '0';
    else
        return c - 'A' + 10;
}

long long gotx(string a)
{
    long long n = 0;
    int len = a.length();
    if(a[0] == '-')
        fei(1, len - 1)
            n = n * 16 - gotInt(a[i]);
    else if(a[0] == '+')
        fei(1, len - 1)
            n = n * 16 + gotInt(a[i]);
    else
        fei(0, len - 1)
            n = n * 16 + gotInt(a[i]);
    // cout << n << endl;
    return n;
}

/*
char a[16], b[16], ans[16];

void gots(long long n);
long long gotx(char* x);
long long gotInt(char x);
char gotc(long long n);

int main()
{
    freopen("in.txt", "r", stdin);
    while(cin >> a >> b)
    {
        memset(ans, '\0', sizeof(ans));
        long long anstmp = gotx(a) + gotx(b);
        gots(anstmp);
        cout << ans << endl;
    }
    return 0;
}

char gotc(long long n)
{
    if(n > 9)
        return 'A' + n - 10;
    else
        return '0' + n;
}

void gots(long long n)
{
    int i = 0;
    if(n < 0)
        ans[i++] = '-';
    while(n > 0)
    {
        ans[i++] = gotc(n % 16);
        n = n / 16;
    }
    ans[i] = '\0';
}

long long gotInt(char x)
{
    if(x >= '0' && x <= '9')
        return x - '0';
    else
        return x - 'A' + 10;
}

long long gotx(char* x)
{
    long long ans = 0;
    int len = strlen(x);
    if(x[0] == '-')
    {
        // delete
        for(int i = len - 1; i > 0; i--)
        {
            ans = ans * 16 - gotInt(x[i]);
        }
    }
    else
    {
        // add
        for(int i = len - 1; i >= 0; i--)
        {
            ans = ans * 16 + gotInt(x[i]);
        }
    }
    return ans;
}
*/
