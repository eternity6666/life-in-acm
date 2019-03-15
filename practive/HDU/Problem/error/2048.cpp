#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 100 + 5;

int c;

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> c;
    while(c--)
    {
        int n;
        cin >> n;

        double ans = 1.0 / n * 100;
        printf("%.2lf", ans);
        cout << "%" << endl;
    }
    return 0;
}

