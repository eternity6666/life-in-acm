#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n >= 1)
        fei(1, n)
            cout << s;
    else
        cout << "error";
    return 0;
}


