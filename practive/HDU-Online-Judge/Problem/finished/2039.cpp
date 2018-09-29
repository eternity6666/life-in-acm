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
    int m;
    scanf("%d", &m);
        while(m--)
        {
            double a, b, c;
            cin >> a >> b >> c;
            bool flag = 1;
            if(a + b <= c || a + c <= b || b + c <= a)
                flag = 0;
            if(flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    return 0;
}

