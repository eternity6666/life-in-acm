#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

// double getArea(double x);
int main()
{
    freopen("in.txt", "r", stdin);
    long long t;
    cin >> t;
    while(t--)
    {
        long long a, b, d;
        cin >> a >> b >> d;
        // cout << a << endl;
        cout << d / 2 * d << endl;
    }
    return 0;
}

/*
double getArea(double x)
{
    x = x / 2.0;
    return x * x * acos(-1);
}
*/

