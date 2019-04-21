// 素数筛法 O(NlonN)

#include <bits/stdc++.h>
using namespace std;
const int maxn = 100000;

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
    for(i = 2; i <= n; i++)
        if(v[i])
            cout << i << endl;
}

int main() 
{

    getPrime(1000);
    return 0;
}

