#include <bits/stdc++.h>
using namespace std;

#define usefre

void findroad(int a[5][5], int x, int y);

int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int maze[5][5];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> maze[i][j];
    findroad(maze, 0, 0);
    return 0;
}