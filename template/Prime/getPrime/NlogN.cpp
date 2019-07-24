// 素数筛法 O(NlonN)

#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6+5;

bool v[maxn];

void getPrime(int n)
{
    int i, j;
    for(i = 2; i <= n; i++)
        v[i] = true;
    
    for(i = 2; i <= n; i++)
    {
        if(v[i])
        {
            if(n / i < i)
                break;
            for(j = i * i; j <= n; j+= i)
                v[j] = false;
        }
    }
    int ans = 0;
    for(i = 2; i <= n; i++)
        if(v[i])
        {
            cout << i << ",";
            ans++;
        }
    cout << ans << endl;
}

int main() 
{

    getPrime(1e6+3);
    return 0;
}

