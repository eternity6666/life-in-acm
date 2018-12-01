#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int n;
bool ill[maxn];
bool v[maxn];
int a[maxn];

void deal();

int main()
{
    freopen("in.txt", "r", stdin);
    while(~scanf("%d", &n))
    {
        ill[1] = 1;
        fei(1, n)
        {
            cin >> a[i];
            ill[i] = v[i] = 0;
        }
        deal();

        fei(1, n)
            if(ill[i])
                ans++;
        cout << ans << endl;
    }
    return 0;
}

void deal()
{

}

