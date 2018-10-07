#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 100 + 5;

int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    cin >> n;
    while(n--)
    {
        int m;
        cin >> m;
        double ans = -maxn;
        while(m--)
        {
            double tmp;
            cin >> tmp;
            if(tmp > ans)
                ans = tmp;
        }
        printf("%.2lf\n", ans);
    }
    return 0;
}

