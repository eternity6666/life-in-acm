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
    while(~scanf("%d", &n) && n)
    {
        int max = -maxn;
        for(int i = 0; i < n; i++)
        {
            int tmp;
            scanf("%d", &tmp);
            if(tmp > max)
                max = tmp;
        }
        cout << max << endl;
    }
    return 0;
}

