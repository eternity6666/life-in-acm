#include <iostream>
#include <vector>
#include <cstdio>
#include <set>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 1000 + 5;

int node[maxn],N,M;

int findX(int x);
void merge(int a, int b);

int main()
{
    freopen("in.txt", "r", stdin);
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int ans = 0;
        scanf("%d %d", &N, &M);
        fei(1,N)
             node[i] = i;

        while(M--)
        {
            int a, b;
            scanf("%d %d", &a, &b);
            merge(a,b);
        }
        fei(1,N)
            if(node[i] == i)
                ans++;
        cout << ans << endl;
    }
    return 0;
}

int findX(int x)
{
    return node[x] == x ? x : node[x] = findX(node[x]);
}

void merge(int a, int b)
{
    a = findX(a);
    b = findX(b);
    if(a != b)
    {
        if(a < b)
            node[b] = a;
        else
            node[a] = b;
    }
}
