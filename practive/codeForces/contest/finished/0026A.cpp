#include <iostream>
#include <cstring>
#include <map>
using namespace std;
const int maxn = 3005;

int prime[maxn];
int len = 0;

void getPrime()
{
    bool v[maxn];
    v[1] = 0;
    memset(v, 1, sizeof(v));
    for(int i = 2; i <= 3000; i++)
        if(v[i])
        {
            for(int j = 2; i * j <= 3000; j++)
                v[i*j] = 0;
            prime[len++] = i;
        }
}

map<int, int> ans;
bool isAP(int x)
{
    int ans = 0;
    for(int i = 0; i < len; i++)
    {
        if(x % prime[i] == 0)
            ans++;
        if(ans > 2) return false;
    }
    return ans == 2;
}

void getAP()
{
    ans[1] = 0;
    for(int i = 2; i < maxn; i++)
        ans[i] = ans[i-1] + (isAP(i) ? 1 : 0);
}

int main()
{
    getPrime();
    getAP();
    int n;
    cin >> n;
    cout << ans[n] << endl;
    return 0;
}
