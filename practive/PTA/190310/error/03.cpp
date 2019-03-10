#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 10000 + 5;

int n;
int v[maxn];
int b[maxn];

void init();
int findX(int x);
void merge(int a, int b);

int main()
{
    freopen("in.txt", "r", stdin);
    
    cin >> n;
    init();

    fei(1, n)
    {
        cin >> v[i];
        merge(i, v[i]);
    }
    
    int ans = 0;
    fei(1, n)
    {
        if(findX(v[i]) == i)
            ans++;
    }
    cout << ans << endl;


    return 0;
}

void init()
{
    fei(1, n)
        b[i] = i;
}

int findX(int x)
{
    return x == v[x] ? x : v[x] = findX(v[x]);
}

void merge(int a, int b)
{
    int ta = findX(a);
    int tb = findX(b);
    if(ta != tb)
    {
        v[tb] = ta;
    }
}

