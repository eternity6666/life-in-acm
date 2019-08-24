#include <iostream>
using namespace std;
const int maxn = 4010;

int a[maxn];
int level[maxn];

int find(int x)
{
    return a[x]==-1?0:level[x]=find(a[x])+1;
}

int main()
{
    int n; cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <= n; i++)
        find(i);
    int ma = 0;
    for(int i = 1; i <= n; i++)
        if(ma<level[i])
            ma = level[i];
    cout << ma+1 << endl;
    return 0;
}
