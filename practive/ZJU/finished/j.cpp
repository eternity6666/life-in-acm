#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    cin >> t;
    // cout << t << endl;
    for(int i = 1; i <= t; i++)
    {
        unsigned long long n;
        scanf("%llu", &n);
        // cin >> n;
        if(n == 1)
            printf("24 25\n");
        else
        {
            double x = n * 2.0;
            double y = n * 3.0;
            printf("%lf %lf\n", x, y);
        }
    }
    return 0;
}


