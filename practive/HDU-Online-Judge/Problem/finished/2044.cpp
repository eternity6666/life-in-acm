#include <iostream>
using namespace std;
const int maxn = 50 + 5;
long long array[maxn];
int main()
{
    freopen("in.txt", "r", stdin);
    array[1] = 1;
    array[2] = 2;
    for(int i = 3; i <= maxn; i++)
        array[i] = array[i - 1] + array[i - 2];
    int n;
    cin >> n;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        cout << array[b - a] << endl;
    }
    return 0;
}
/*
#include <iostream>
#include <cstdio>
using namespace std;
const int maxn = 50 + 5;
bool used[maxn] = {0};
int array[maxn], ans = 0;
void bfs(int now, int flag);
int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if(!used[b - a])
        {
            ans = 0;
            bfs(0, b - a);
            array[b - a] = ans;
            used[b - 1] = 1;
        }
        cout << array[b - a] << endl;
    }
    return 0;
}

void bfs(int now, int flag)
{
    if(now == flag)
    {
        ans++;
        return;
    }
    if(now < flag)
    {
        bfs(now + 1, flag);
        bfs(now + 2, flag);
    }
}
*/
