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
    int t;
    cin >> t;
    while(t--)
    {
        char x;
        int y;
        cin >> x >> y;
        if(x >= 'a' && x <= 'z')
            cout << y - (1 + x - 'a') << endl;
        else
            cout << y + (1 + x - 'A') << endl;
    }
    return 0;
}

