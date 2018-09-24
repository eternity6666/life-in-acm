#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 1000 + 5;

int food[maxn], n, m;

int main()
{
    freopen("in.txt", "r", stdin);
    while(~scanf("%d", &n) && n)
    {
        fei(1, n)
            scanf("%d", food + i);
        scanf("%d", &m);
        sort(food + 1, food + n);
        fei(1, n)
        {
            if(m < 5)
                break;
            m = m - food[i];
        }
        cout << m << endl;
    }
    return 0;
}

