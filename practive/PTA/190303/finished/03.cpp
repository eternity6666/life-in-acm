#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int main()
{
    freopen("in.txt", "r", stdin);
    string old = "";
    string tmp;
    while(cin >> tmp)
    {
        if(tmp.length() > old.length())
            old = tmp;
    }
    cout << old << endl;
    return 0;
}


