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
    cin >> m;
    while(m --)
    {
        int a, b;
        cin >>  a >> b;
        int aa = 0, bb = 0;
        fei(1, sqrt(a))
            if(a % i == 0)
            {
                if(a / i != i && a / i != a)
                    aa += a / i;
                aa += i;
            }
        fei(1, sqrt(b))
            if(b % i == 0)
            {
                if(b / i != i && b / i != b)
                    bb += b / i;
                bb += i;
            }
        if(bb == a && aa == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

