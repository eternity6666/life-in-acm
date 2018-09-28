#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;
const int maxn = 100 + 5;

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
        for(int i = len - 1; i > 0; i++)
        {
            ans = ans * 16 - gotInt(x[i]);
        }
    }
    else
    {
        // add
        for(int i = len - 1; i >= 0; i++)
        {
            ans = ans * 16 + gotInt(x[i]);
        }
    }
    return ans;
}
