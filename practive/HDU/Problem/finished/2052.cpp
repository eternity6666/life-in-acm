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
    int n, m;
    int x = 0;
    while(cin >> n >> m)
    {
        cout << "+";
        fei(1, n)
            cout << "-";
        cout << "+\n";
        fej(1, m)
        {
            cout << "|";
            fei(1, n)
                cout << " ";
            cout << "|\n";
        }
        cout << "+";
        fei(1, n)
            cout << "-";
        cout << "+\n";
            cout << endl;
    }
    return 0;
}

