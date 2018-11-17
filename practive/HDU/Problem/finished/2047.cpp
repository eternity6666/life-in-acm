#include <iostream>
#include <cstdio>
using namespace std;
long long E[40 + 5], O[40 + 5], F[40 + 5];
int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    E[1] = O[1] = F[1] = 1;
    for(int i = 2; i < 40; i++)
    {
        /*
        long long tmp = E[i - 1] + O[i - 1] + F[i - 1];
        F[i] = E[i] = 3 * tmp;
        O[i] = 2 * (E[i - 1] + F[i - 1]);
        */
        E[i] = F[i] = E[i - 1] + O[i - 1] + F[i - 1];
        O[i] = E[i] - O[i - 1];
    }
    while(~scanf("%d", &n))
    {
        cout << E[n] + O[n] + F[n] << endl;
    }
    return 0;
}
/*
#include <iostream>
#include <cstdio>
using namespace std;
int ans = 0;
void bfs(int n, string now);
int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    while(scanf("%d", &n) != EOF)
    {
        ans = 0;
        bfs(n, "");
        cout << ans << endl;
    }
    return 0;
}

void bfs(int n, string now)
{
    if(n == 0)
        ans++;
    else
    {
        if(now[now.size() - 1] != 'O')
            bfs(n - 1, now + 'O');
        bfs(n - 1, now + 'E');
        bfs(n - 1, now + 'F');
    }
    return;
}
*/
