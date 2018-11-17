#include <iostream>
using namespace std;
const int maxn = 1000000000 + 7;

vector<int> a[maxn];
int k, n;

int main()
{
    scanf("%d %d", &k, &n);
    for(int i = 0; i < n; i++)
        for(int j = 1; j <= k; j++)
            a[i].push_back((i + j) % n);

    
}
