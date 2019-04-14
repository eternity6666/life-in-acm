#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int t, n;
long long a[maxn], b[maxn];

bool deal();

int main()
{
    freopen("in.txt", "r", stdin);
    
    cin >> t;
    while(t--)
    {
        cin >> n;
        fei(1, n)
            cin >> a[i];
        /*
        fei(1, n)
            cout << a[i] << " ";
        cout << endl;
        */
        fei(1, n)
            cin >> b[i];
        if(deal())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}

bool deal()
{
    long long tmp = 0;
    for(int i = n; i >= 1; i--)
    {
        tmp += b[i];
        if(tmp >= a[i])
            tmp -= a[i];
        else
            return false;
    }
    return true;
}

