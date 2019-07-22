#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("2-6-1-out.txt", "w", stdout);
    for (int a = 123; a < 330; a++)
    {
        int visit[10] = {0};
        visit[a / 100] =1;
        visit[a / 10 % 10] =1;
        visit[a % 10] =1;
        visit[2 * a / 100] =1;
        visit[2 * a / 10 % 10] =1;
        visit[2 * a % 10] =1;
        visit[3 * a / 100] =1;
        visit[3 * a / 10 % 10] =1;
        visit[3 * a % 10] =1;
        int i = 1;
        for (; i < 10; i++)
        {
            if (!visit[i])
            {
                break;
            }
            else
                continue;
        }
        if (i == 10)
        {
            cout << a << " " << 2 * a << " " << 3 * a << endl;
        }
    }
    return 0;
}