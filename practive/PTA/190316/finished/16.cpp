#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

char c;
int n;
char x[maxn][maxn];
bool bydl()
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            // cout << 1;
            if(x[i][j] != x[n - i + 1][n - j + 1])
                return false;
        }
        // cout << endl;
    }
    return true;
}

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> c >> n;

    getchar();
    fei(1, n)
    {
        fej(1, n)
        {
            x[i][j] = getchar();
        }
        getchar();
    }

    /*
    fei(1, n)
    {
        fej(1, n)
            cout << x[i][j];
        cout << endl;
    }
    */

    if(bydl())
    {
        cout << "bu yong dao le" << endl;
    }
    for(int i = n; i >= 1; i--)
    {
        for(int j = n; j >= 1; j--)
            if(x[i][j] != ' ')
                cout << c;
            else
                cout << x[i][j];
            /*
            if(x[n - i + 1][n - j + 1] != ' ')
                cout << c;
            else
                cout << x[n - i + 1][n - j + 1];
            */
        cout << endl;
    }
    return 0;
}


