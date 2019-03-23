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
    while(n--)
    {
        string name;
        int a;
        int b;
        cin >> name >> a >> b;
        if(a<15 || a > 20 || b < 50 || b > 70)
            cout << name << endl;
    }
    return 0;
}


