#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 100 + 5;
int get_ten(int n);
int get_sixteen(int n);
int get_twelve(int n);
int get(int n, int j);
bool deal(int n);

int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n) && n)
    {
        bool flag = deal(n);
        if(flag)
            cout << n << " is a Sky Number.\n";
        else
            cout << n << " is not a Sky Number.\n";
    }
    return 0;
}

int get_ten(int n)
{
    int ans = 0;
    while(n != 0)
    {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

int get_sixteen(int n)
{
    int ans = 0;
    while(n != 0)
    {
        ans += n % 16;
        n /= 16;
    }
    return ans;
}

int get_twelve(int n)
{
    int ans = 0;
    while(n != 0)
    {
        ans += n % 12;
        n /= 12;
    }
    return ans;
}

int get(int n, int j)
{
    int ans = 0;
    while(n != 0)
    {
        ans += n % j;
        n /= j;
    }
    return ans;
}

bool deal(int n)
{
    bool flag = 0;
    int a, b, c;
    /*
     * a = get_ten(n);
     * b = get_sixteen(n);
     * c = get_twelve(n);
     */
    a = get(n, 10);
    b = get(n, 16);
    c = get(n, 12);
    if(a == b && a == c)
        flag = 1;
    return flag;
}
