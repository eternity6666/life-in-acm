#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int main()
{
    freopen("in.txt", "r", stdin);

    int l, n;
    cin >> l >> n;


    n = pow(26, l) - n;
    int a, b, c;
    a = n / 26 / 26;
    n= n % (26 * 26);
    b = n / 26;
    n = n % 26;
    c = n;

    char x = ('a' + a);
    char y = ('a' + b);
    char z = ('a' + c);
    cout << x << y << z << endl;
    return 0;
}


