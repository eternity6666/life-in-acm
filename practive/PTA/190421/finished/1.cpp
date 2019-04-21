#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int main()
{
    freopen("in.txt", "r", stdin);
    unsigned long long a, b, c;
    cin >> a >> b >> c;
    // cout << (a * b) % c << endl;
    cout << ((a % c) * (b % c)) % c << endl;
    return 0;
}


