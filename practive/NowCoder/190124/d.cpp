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
    long long sum = 0;
    fei(1, n)
    {
        int a;
        cin >> a;
        if(a < 60)
            sum++;
    }
    cout << sum * 400 << endl;
    return 0;
}

