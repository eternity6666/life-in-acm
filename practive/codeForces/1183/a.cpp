#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 1e6 + 5;
int digit(int a)
{
    int sum = 0;
    while(a)
    {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

int main()
{
    // freopen("in.txt", "r", stdin);
    int a;
    cin >> a;
    while(true)
    {
        if(digit(a) % 4 == 0)
        {
            cout << a << endl;
            break;
        }
        a++;
    }
    return 0;
}



